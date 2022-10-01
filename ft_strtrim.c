/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 22:33:17 by marvin            #+#    #+#             */
/*   Updated: 2022/10/01 22:33:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Descripción Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)
*/

#include "libft.h"
#include <stdlib.h>

int		in_set(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
		if (s1[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;
	size_t	len;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (in_set(set, s1[i]) && s1[i])
		i++;
	while (in_set(set, s1[len - 1]) && (len - 1))
		len--;
	if (len < i)
		len = i;
	str = malloc(len - i + 1);
	if (!str)
		return (NULL);
	while (i < len)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
