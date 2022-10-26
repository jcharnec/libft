/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <xjpeterx@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:20:09 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 00:20:09 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list  *start;

	if(*lst)
	{
		while (*lst)
		{
			start = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = start;
		}
		*lst = NULL;
	}
}