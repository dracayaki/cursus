/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:40:17 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/07/18 17:49:32 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *s)
{
    int i;

    i = 0;
    if (!s)
        return(NULL);
    while (s[i] != '\0')
    {
        write(1, &s[i], 1);
        i++;
    }
    return (i);
}

int ft_print_percent(int x)
{
    write(1, "%", 1);
    return(1);
}
