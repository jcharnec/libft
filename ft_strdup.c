/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:10:41 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:10:41 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Descripción 
	Reserva (con malloc(3)) y devuelve una substring de
	la string ’s’.
	La substring empieza desde el índice ’start’ y
	tiene una longitud máxima ’len’.
	Parámetros 
	s: La string desde la que crear la substring.
	start: El índice del caracter en ’s’ desde el que
	empezar la substring.
	len: La longitud máxima de la substring.
	Valor devuelto 
	La substring resultante.
	NULL si falla la reserva de memoria.*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
