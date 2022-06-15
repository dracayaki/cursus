/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:34:50 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/06 15:46:06 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* el itoa hará lo mismo que el atoi pero
reservando memoria */

static int	ft_number_len(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		aux;
	long	nb;

	nb = (long)n;
	aux = ft_number_len(n);
	result = malloc((aux + 1) * sizeof(char));
	if (!result)
		return (0);
	result[aux] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	else if (nb == 0)
		result[0] = '0';
	while (nb != 0)
	{
		aux--;
		result[aux] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}

/*
int	main(void)
{
	size_t	s;

	s = -2545;
	printf("%s\n", ft_itoa(s));
	s = 2545;
	printf("%s\n", ft_itoa(s));
	s = -0;
	printf("%s\n", ft_itoa(s));
}
*/