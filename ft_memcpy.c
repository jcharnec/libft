/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:09:47 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:09:47 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   BIBLIOTECA: <string.h>
    SINOPSIS: copiar área de memoria

    DESCRIPCIÓN:
    La función memcpy() copia n bytes del área de memoria s2 al área de memoria
    s1. Si s1 y s2 se superponen, el comportamiento no está definido. Si
    s1 y s2 se superponen, debería usar memmove en su lugar.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	d = (char *)dst;
	s = (const char *)src;
	while (n--)
		d[n] = s[n];
	return (dst);
}
