/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:30:36 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/07/20 16:08:10 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_puthex(const char *str, unsigned long  nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 17)
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