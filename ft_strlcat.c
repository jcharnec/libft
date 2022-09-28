/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:56:23 by jcharnec          #+#    #+#             */
/*   Updated: 2022/09/28 12:15:26 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	if (size == 0 || size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i = ft_strlen(dest);
	c = 0;
	while (src[c] != '\0' && c < (size - ft_strlen(dest) - 1))
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (i + ft_strlen(src));
}
