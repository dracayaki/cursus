/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:48:05 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/07/18 18:26:57 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_putchar(char c);
unsigned int	ft_putstr(char *s);
unsigned int	ft_print_percent(void);
unsigned int	ft_putnbr(int nb);

#endif
