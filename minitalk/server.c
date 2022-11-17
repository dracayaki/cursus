/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:07:50 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/11/17 19:37:48 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_bin_to_char(int sig)
{
	int				power;
	unsigned char	x;
	size_t			i;

	power = 2;
	x = 0;
	i = ft_strlen(str) + 1;
	while (i + 1 != 0)
	{
		x += power * (str[i] - '0');
		power *= 2;
		i--;
	}
	write(1, &x, 1);
}

int	main(void)
{
	signal(SIGUSR1, ft_bin_to_char);
	signal(SIGUSR2, ft_bin_to_char);
	ft_printf("The Server PID is: %d\n", getpid());
	while (1)
		pause();
	return (0);
}
