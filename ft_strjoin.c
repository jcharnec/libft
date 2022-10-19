/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:06:38 by marvin            #+#    #+#             */
/*   Updated: 2022/10/04 11:22:51 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Reserva (con malloc(3)) y devuelve una nueva
	string, formada por la concatenación de ’s1’ y
	’s2’.
	Parámetros s1: La primera string.
	s2: La string a añadir a ’s1’.
	Valor devuelto La nueva string.
	NULL si falla la reserva de memoria.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
