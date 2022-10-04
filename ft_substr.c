/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:43:21 by marvin            #+#    #+#             */
/*   Updated: 2022/10/04 13:29:23 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Devuelve la subcadena de la cadena de origen que comienza en 
la posición m y terminando en la posición n-1. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (char *)malloc(len + 1);
	if (!s)
		return (0);
	i = ft_strlen(s);
	j = 0;
	while (i < ft_strlen(s) && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
	free (str);
}
