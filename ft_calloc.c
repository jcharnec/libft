/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:04:35 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:04:35 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	f_size;
	void	*dst;

	f_size = size * count;
	dst = malloc(f_size);
	if (!dst)
		return (0);
	ft_memset(dst, 0, f_size);
	return (dst);
}
