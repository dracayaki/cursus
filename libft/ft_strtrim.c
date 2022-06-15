/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:38:28 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/10 14:57:43 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
recorre la string por delante y por detras, hasta que encuentra
set y lo elimina (solo la primera vez que sale en cada lado)
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	size = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[size]) && size != 0)
		size--;
	return (ft_substr((char *)s1, 0, size + 1));
}

/*
int	main(void)
{
	char	str[] = "rtestrdsrtse";
	char	set[] = "nestor";

	printf("%s\n", ft_strtrim(str, set));
}

*/