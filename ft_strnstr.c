/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:11:21 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:11:21 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[0])
		return ((char *)s1);
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		while (i + j < n && s1[i + j] == s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
