/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:48:12 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/06/08 15:53:40 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* convierte str de tipo char a tipo int
si no hay una conversión válida devuelve 0
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	number = 0;
	i = 0;
	sign = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	number = number * sign;
	return (number);
}
/* int	main(void)
{
	char	s[3];
	int		i;
	char	st[4];
	char	str[6];

	s[3] = "545";
	i = ft_atoi(s);
	printf("%d\n", i);
	i = atoi(s);
	printf("%d\n", i);
	st[4] = "-545";
	i = ft_atoi(st);
	printf("%d\n", i);
	i = atoi(st);
	printf("%d\n", i);
	str[6] = "---545";
	i = ft_atoi(str);
	printf("%d\n", i);
	i = atoi(str);
	printf("%d\n", i);
}
*/
