/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:47:20 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/12 15:15:36 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The function concatenates the strings *dst and *src, 
and places the result in the string *dst. Unlike the 
strcat() function, strlcat() guarantees that the total
 length of the result string will be between the initial length 
 of dst and size. The zero at the end of the string is included. 
 This function is mainly used to avoid oversize of the character array. 
 */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
/* int	main(void)
{
	char			dest[];
	char			src[];
	unsigned long	i;
	unsigned long	s;
	unsigned long	proof;

	dest[] = "hola ";
	src[] = "como tu estas";
	s = 4;
	i = ft_strlcat(dest, src, s);
	printf("%s | %lu\n", dest, i);
	proof = strlcat(dest, src, s);
	printf("%s | %lu\n", dest, proof);
}
*/