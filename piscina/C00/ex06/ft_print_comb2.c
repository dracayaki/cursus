/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:57:33 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/03/31 18:19:48 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char imprimir)
{
	write(1, &imprimir, 1);
}

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print(num1 / 10 + '0');
			ft_print(num1 % 10 + '0');
			ft_print(' ');
			ft_print(num2 / 10 + '0');
			ft_print(num2 % 10 + '0');
			if (!(num1 == 98))
			{
				write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}

int main()

{
	ft_print_comb2();
	return(0);
}