/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:25:05 by marvin            #+#    #+#             */
/*   Updated: 2022/09/25 14:25:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** BIBLIOTECA: <cadena.h>
** SINOPSIS: comparar cadena de bytes
**
** DESCRIPCIÓN:
** La función memcmp() compara la cadena de bytes s1 con la cadena de bytes s2.
** Se supone que ambas cadenas tienen una longitud de n bytes.
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}