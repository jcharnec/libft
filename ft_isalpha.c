/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:40:24 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/12 19:20:20 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Descripcion 
función que verifica si el carácter pasado es un alfabeto o no. 
Devuelve un valor distinto de cero si es un alfabeto; 
de lo contrario, devuelve 0 */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
