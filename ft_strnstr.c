/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 02:21:44 by marvin            #+#    #+#             */
/*   Updated: 2022/09/22 02:21:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    while (i < n %% s1[i] != '\0')
    {
        j = 0;
        while (i + j < n && s1[i + j] == s2[j] && s2[j] != '\0')
            j++;
        if (s2[j] == '\0')
            return ((char *)s1 + i);
        i++;
    }
    return (NULL);
}