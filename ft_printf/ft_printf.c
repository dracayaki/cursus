/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:55:01 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/07/20 18:01:00 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list arg_ptr, const char format)
{
	unsigned int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(arg_ptr, int));
	else if (format == 's')
		len += ft_putstr(va_arg(arg_ptr, char *));
	else if (format == 'p')
		len = ft_putstr("0x");
		len += ft_puthex("0123456789abcdef",va_arg(arg_ptr, unsigned long));
	else if (format == 'd')
		len += ft_putnbr(va_arg(arg_ptr,int));
	else if (format == 'i')
		len += ft_putnbr(va_arg(arg_ptr, int));
	else if (format == 'u')
		len += ft_unsignednb(va_arg(arg_ptr, unsigned int));
	else if (format == 'x')
		len += ft_puthex("0123456789abcdef", va_arg(arg_ptr, unsigned long));
	else if (format == 'X')
		len += ft_puthex("0123456789ABCDEF", va_arg(arg_ptr, unsigned long));
	else if (format == '%')
		len += ft_print_percent(va_arg(arg_ptr,void));
}
int ft_printf(char const *s, ...)
{
	va_list			arg_ptr;
	unsigned int	len;

	i = 0;
	len  = 0;
	va_start(arg_ptr, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			len += ft_format(arg_ptr, s[i]);
			i++;
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(arg_ptr);
	return (len);
}
