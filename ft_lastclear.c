/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:27:34 by marvin            #+#    #+#             */
/*   Updated: 2022/10/19 14:27:34 by marvin           ###   ########.fr       */
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