/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:11:43 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:11:43 by jcharnec         ###   ########.fr       */
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

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	s_len;
	size_t	end;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	end = 0;
	if (start < s_len)
		end = s_len - start;
	if (end > len)
		end = len;
	s2 = (char *)malloc(sizeof(char) * (end + 1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s + start, end + 1);
	return (s2);
}
