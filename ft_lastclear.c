/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:05:35 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:05:35 by jcharnec         ###   ########.fr       */
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