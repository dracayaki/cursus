/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:50:22 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/07/19 18:41:05 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr(int nb)

{
	unsigned int	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		i++;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		i++;
	}
	else
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	return (i);
}

int	ft_unsignednb(unsigned int nb)

{	
	unsigned int	i;

	i = 0;
	if (nb >= 0 && nb < 10 )
	{
		ft_putchar(nb + '0');
		i++;
	}
	else
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	return(i);
}

int	main(void)
{
	unsigned int	i;
	unsigned int j;

	i = ft_putnbr(-2147483648);
	printf("\n%d", i);
	i = ft_unsignednb(-5);
	printf(" || %u ||", i);
	j = -5;
	printf("%u", j);
}
