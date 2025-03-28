/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:11:30 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:11:30 by jcharnec         ###   ########.fr       */
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
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
