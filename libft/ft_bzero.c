/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:36:21 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 17:27:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
elimina los datos de n bytes reemplazandolos por ceros '\0'
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/* int	main(void)
{
	char	s[] = "Hola como estas";
	char	u[] = "Hola como estas";

	ft_bzero(s, 5);
	printf("%s\n", &s[5]);
	bzero(u, 5);
	printf("%s\n", &u[5]);
}
*/