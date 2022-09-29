/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:19:10 by marvin            #+#    #+#             */
/*   Updated: 2022/09/29 12:28:51 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    BIBLIOTECA: <string.h>
    SINOPSIS: localizar carácter en cadena (última aparición)

    DESCRIPCIÓN:
    La función strrchr() localiza la última aparición de c (convertida a una
    char) en la cadena s. Si c es `\0', strrchr() localiza la terminación
    \0'.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	/*int			i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((unsigned char *)s);
	return (NULL);*/
	size_t	i;

	i = 0;
	while (s[i])
		if()

}
