/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:11:37 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:11:37 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Descripción 
	Elimina todos los caracteres de la string ’set’
	desde el principio y desde el final de ’s1’, hasta
	encontrar un caracter no perteneciente a ’set’. La
	string resultante se devuelve con una reserva de
	malloc(3)
	Parámetros 
	s1: La string que debe ser recortada.
	set: Los caracteres a eliminar de la string.
	Valor devuelto 
	La string recortada.
	NULL si falla la reserva de memoria.*/

#include "libft.h"

int	ft_setcheck(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	if (s1 == 0 || set == 0)
		return (0);
	end = (int)ft_strlen(s1);
	while (s1[start] && ft_setcheck(s1[start], set))
		start++;
	while (end > start && ft_setcheck(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (0);
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
