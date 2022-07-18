/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:09:40 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/04/02 12:03:23 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)

{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (dest[i] != '\0')
		i++;
	while (src[aux])
	{
		dest[i] = src[aux];
		i++;
		aux++;
	}
	dest[i] = '\0';
	return (dest);
}
