/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:55:56 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/11/18 20:50:17 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_message(int pid, char *str)
{
	int						counter;
	int						bit;

	counter = 0;
	while (str[counter] != '\0')
	{
		bit = 7;
		while (bit >= 0)
		{
			if (str[counter] >> bit & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			bit--;
			usleep(200);
		}
		counter++;
	}
}

int	main(int argc, char *argv[])
{
	int		pid;
	char	*msg;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		msg = argv[2];
		ft_send_message(pid, msg);
	}
}
