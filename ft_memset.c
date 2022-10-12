/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:06:37 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/12 20:06:55 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Descripcion 
La función memset copia el valor de c (convertido a un unsigned char) a cada 
uno de los primeros n caracteres en el objeto al cual señala s. La función 
memset devuelve el valor de s. */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *) b;
	while (len > 0)
	{
		*p = c;
		p++;
		len --;
	}
	return (b);
}
