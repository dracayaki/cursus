/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:48:05 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/07/25 11:49:11 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>

int				ft_putchar(int c);
int				ft_putstr(char *s);
unsigned int	ft_puthex(const char *str, unsigned long long nb);
int				ft_putnbr(int nb);
int				ft_unsignednb(unsigned int nb);
int				ft_print_percent(void);
int				ft_format(va_list arg_ptr, const char format);
int				ft_printf(char const *s, ...);

#endif
