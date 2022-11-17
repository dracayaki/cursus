/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:43:33 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/12 19:02:39 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 function, which extracts n characters from the source string starting from the
  beg index and returns it.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	ft_strlcpy(&p[0], s + start, len + 1);
	return (p);
}
/*
 int	main(void)
{
	char	str[];

	str[] = "palitos";
	printf("%s", ft_substr(str, 3, 5));
}
*/