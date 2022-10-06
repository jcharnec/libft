/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:56:23 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/04 13:01:14 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, char *src, unsigned int dstsize)
{
	size_t	i;
	size_t	c;

	if (dstsize == 0 || dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	c = 0;
	while (src[c] != '\0' && (i + 1 < dstsize))
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[c]));
}
