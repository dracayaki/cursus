/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:55:56 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/11/17 19:29:18 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_send_message(unsigned char *str, int pid_s)
{
	int				i;
	int				counter;
	unsigned char	bit;

	i = 8;
	counter = -1;
	while (i-- && str[counter++] != '\0')
	{
		bit = ((str[counter] >> i) & 1) + '0';
		if (bit == '1')
			kill(pid_s, SIGUSR1);
		else
			kill(pid_s, SIGUSR2);
		usleep(200);
	}
}

int main	(int argc, char *argv[])
{
	int		pid;
	char	*message;

	message = argv[2];
	if (argc != 3)
	{
		ft_printf("there are more arguments than necessary");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	ft_send_message(argv[2], argv[1]);
}
