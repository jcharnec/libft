/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:43:21 by marvin            #+#    #+#             */
/*   Updated: 2022/09/30 12:43:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* El prototipo de la función substr es: char* substr(const char *source, int m, int n)

Devuelve la subcadena de la cadena de origen que comienza en la posición m y terminando 
en la posición n-1. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s || !(str = (char *)malloc(len + 1)))
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}