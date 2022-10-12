/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:59:30 by marvin            #+#    #+#             */
/*   Updated: 2022/10/12 19:21:23 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Descripcion 
función que verifica si el carácter pasado es un numerico o no. 
Devuelve un valor distinto de cero si es un alfabeto; 
de lo contrario, devuelve 0 */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
