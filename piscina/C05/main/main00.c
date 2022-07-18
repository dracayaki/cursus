/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:03:20 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/04/04 17:57:07 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial( int nb);

int	main(void)
{
	int	nb;

	nb = 1;
	printf("%d", ft_iterative_factorial(nb));
}
