/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:08:01 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/04 11:16:00 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Biblioteca: <stdlib.h>
Parámetros: La cadena a convertir

Valor devuelto: El valor numérico

Detalles:
La conversión se detiene en cuanto se encuentra un carácter no aceptable. 
Si no se puede convertir la cadena, devuelve 0. En caso de desbordarmiento, 
el valor no está definido */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || \
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}
