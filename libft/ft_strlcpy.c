/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:14:53 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 18:59:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
strlcpy() takes the full size of the buffer, 
not only the length, and terminates the result 
with NUL as long as size is greater than 0. Include
 a byte for the NUL in your size value.
The strlcpy() function returns the total length of the
 string that would have been copied if there was unlimited space.
  This might or might not be equal to the length of the string 
  actually copied, depending on whether there was enough space
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i] = '\0';
	return (j);
}
/* int	main(void)
{
	char	dest[4];
	char	src[5];

	dest[4] = "hola";
	src[5] = "hello";
	printf("%lu %s\n", ft_strlcpy(dest, src, 4), dest);
	printf("%lu %s\n", strlcpy(dest, src, 4), dest);
	printf("%lu %s\n", ft_strlcpy(dest, src, 7), dest);
	printf("%lu %s\n", strlcpy(dest, src, 5), dest);
}
*/
