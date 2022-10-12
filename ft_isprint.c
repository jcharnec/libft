/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:51:47 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/12 19:24:01 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Descripcion 
función que verifica si el carácter pasado es un caracter imprimible. 
Devuelve un valor distinto de cero si es un caracte imprimible; 
de lo contrario, devuelve 0 */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
