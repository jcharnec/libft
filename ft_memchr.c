/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:09:32 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:09:32 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	BIBLIOTECA: <string.h>
	SINOPSIS: localizar byte en cadena de bytes

	DESCRIPCIÓN:
	La función memchr() localiza la primera aparición de c (convertida a una
	unsigned char) en string s.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
