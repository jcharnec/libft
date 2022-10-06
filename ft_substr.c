/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:43:21 by marvin            #+#    #+#             */
/*   Updated: 2022/10/04 13:33:37 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	DESCRIPCIÓN 
	Asigna (con malloc(3)) y devuelve una subcadena de la cadena 's'. 
	La subcadena comienza en el índice 'inicio' y tiene el tamaño máximo 'largo'. 
	PARÁMETROS * #1. La cadena a partir de la cual crear la subcadena. 
	#2. El índice de inicio de la subcadena en la cadena 's'. 
	#3. La longitud máxima de la subcadena. 
	VALORES DEVUELTOS 
	La subcadena. NULL si falla la asignación.. */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	s_len;
	size_t	end;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	end = 0;
	if (start < s_len)
		end = s_len - start;
	if (end > len)
		end = len;
	s2 = (char *)malloc(sizeof(char) * (end + 1));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s + start, end + 1);
	return (s2);
}

/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(len + 1);
	if (!s || !str)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
*/
