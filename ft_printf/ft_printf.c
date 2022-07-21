/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:55:01 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/07/21 19:22:20 by mmagma-g         ###   ########.fr       */
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
	{
		len = ft_putstr("0x");
		len += ft_puthex("0123456789abcdef", va_arg(arg_ptr, unsigned long));
	}
	else if (format == 'd')
		len += ft_putnbr(va_arg(arg_ptr, int));
	else if (format == 'i')
		len += ft_putnbr(va_arg(arg_ptr, int));
	else if (format == 'u')
		len += ft_unsignednb(va_arg(arg_ptr, unsigned int));
	else if (format == 'x')
		len += ft_puthex("0123456789abcdef", va_arg(arg_ptr, unsigned long));
	else if (format == 'X')
		len += ft_puthex("0123456789ABCDEF", va_arg(arg_ptr, unsigned long));
	else if (format == '%')
		len += ft_print_percent();
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list			arg_ptr;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	va_start(arg_ptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += ft_format(arg_ptr, s[i + 1]);
			i++;
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(arg_ptr);
	return (len);
}

/* int	main(void)
{
	ft_printf(" NULL %s NULL \n", NULL);
	printf(" NULL %s NULL \n", NULL);
	ft_printf(" %p \n", 16);
	printf(" %p \n", 16);
	ft_printf(" %x \n", 16);
	printf(" %x \n", 16);
	ft_printf(" %x \n", LONG_MAX);
	printf(" %x \n", LONG_MAX);
	ft_printf(" %x \n", LONG_MIN);
	printf(" %x \n", LONG_MIN);
	ft_printf(" %x \n", ULONG_MAX);
	printf(" %x \n", ULONG_MAX);
	ft_printf(" %x \n", 9223372036854775807LL);
	printf(" %x \n", 9223372036854775807LL);
	ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, 
	LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN,
	 LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("9 %c %c %c \n", 0, '1', '2');
	printf("9: %c %c %c \n", 0, '1', '2');
}
 */