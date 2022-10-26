/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:09:57 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:09:57 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Descripcion 
La función memset copia el valor de c (convertido a un unsigned char) a cada 
uno de los primeros n caracteres en el objeto al cual señala b. La función 
memset devuelve el valor de b. */

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
