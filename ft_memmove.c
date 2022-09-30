/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:15:15 by marvin            #+#    #+#             */
/*   Updated: 2022/09/29 10:50:43 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	 BIBLIOTECA: <string.h>
	SINOPSIS: copiar cadena de bytes

	DESCRIPCIÓN:
	La función memmove() copia n bytes de la cadena s2 a la cadena s1. Las
	dos cadenas pueden superponerse; la copia se realiza siempre de forma 
	no destructiva.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}
