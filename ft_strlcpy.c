/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:23:46 by jcharnec          #+#    #+#             */
/*   Updated: 2022/09/20 12:09:42 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int				i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size - 1 != 0)
	{
		while ((c < size - 1) && (src[c] != '\0'))
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (i);
}
