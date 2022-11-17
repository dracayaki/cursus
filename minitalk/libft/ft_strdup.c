/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:08:10 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/05 09:45:31 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 La  función  strdup()  devuelve  un  puntero  a  una 
  nueva cadena de caracteres que es un
duplicado de la cadena apuntada por s.  
 La  memoria  para  la  nueva  cadena  se  obtiene
 automáticamente con malloc(3), y puede (y debe)
  liberarse con free(3).

*/
char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*s2;

	i = 0;
	len = ft_strlen(s1) + 1;
	s2 = malloc(sizeof(char) * len);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, len);
	return (s2);
}
/* int	main(void)
{
	char s1[] = "Hola como estas";

    printf("%s\n", ft_strdup(s1));
	printf("%s", strdup(s1));
}
*/