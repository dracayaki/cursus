/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:30:36 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/10/04 16:25:13 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_puthex(const char *str, unsigned long long nb)
{
	int	i;

	i = 0;
	if (nb < 16)
	{
		ft_putchar(str[nb]);
		i++;
	}
	else
	{
		i += ft_puthex(str, nb / 16);
		i += ft_puthex(str, nb % 16);
	}
	return (i);
}
