/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:07:50 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/11/18 20:29:23 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_message_received(int sig)
{
	static char	str;
	static int	i;

	if (!i)
	{
		i = 1;
		str = 0;
	}
	str |= (sig == SIGUSR2);
	if (i++ == 8)
	{
		ft_putchar_fd(str, 1);
		i = 1;
		str = 0;
	}
	else
		str <<= 1;
}

int	main(void)
{
	ft_printf("The Server PID is: %d\n", getpid());
	signal(SIGUSR2, ft_message_received);
	signal(SIGUSR1, ft_message_received);
	while (1)
		pause();
}
