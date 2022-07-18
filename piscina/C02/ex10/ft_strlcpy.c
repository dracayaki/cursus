/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:50:38 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/03/31 15:56:38 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	cont1;
	unsigned int	cont2;

	cont1 = 0;
	cont2 = 0;
	while (src[cont1] != '\0')
	{
		cont1++;
	}
	if (size != 0)
	{
		while (src[cont2] != '\0' && cont2 < (size - 1))
		{
			dest[cont2] = src[cont2];
			cont2++;
		}
		dest[cont2] = '\0';
	}
	return (cont1);
}
