/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:10:34 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:10:34 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Biblioteca: <string.h>

Parámetros: La cadena a analizar, la letra que se busca

Valor devuelto: La posición (puntero) o NULL

Detalles:
Devuelve NULL si no la contiene, o un puntero a la posición en que se encuentra, 
en caso contrario */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}
