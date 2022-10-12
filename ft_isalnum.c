/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 23:12:21 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/12 19:45:42 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Descripcion 
función que verifica si el carácter pasado es un alfabeto o numerico. 
Devuelve un valor distinto de cero si es un alfabeto o numerico; 
de lo contrario, devuelve 0 */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}
