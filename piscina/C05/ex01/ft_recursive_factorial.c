/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:03:47 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/04/07 21:09:38 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	if (nb > 1)
		factorial = nb * ft_recursive_factorial(nb - 1);
	return (factorial);
}

int	main(void)
{
	printf("%d", ft_recursive_factorial(-5));
	return (0);
}

