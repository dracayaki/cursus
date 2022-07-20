/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:40:17 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/07/20 12:12:07 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

unsigned int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

unsigned int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

/* int	main(void)
{
	printf("| %u\n", ft_putchar('i'));
	printf("| %u\n", ft_putstr("hola"));
	printf("| %u\n", ft_print_percent());
} */
