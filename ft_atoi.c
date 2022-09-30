/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:08:01 by jcharnec          #+#    #+#             */
/*   Updated: 2022/09/29 11:39:32 by jcharnec         ###   ########.fr       */
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
	int	c;
	int	i;
	int	res;

	c = 0;
	i = 1;
	res = 0;
	while ((str[c] > 7 && str[c] < 14) || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			i *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * i);
}
