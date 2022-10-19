/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:51:26 by marvin            #+#    #+#             */
/*   Updated: 2022/10/19 13:51:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lastadd_back(t_list **lst, t_list *new)
{
	t_list  *add_lst;

	if (new)
	{
		if(!*lst)
		{
			*lst = new;
			return ;
		}
		add_lst = ft_lstlast(*lst);
		add_lst->next = new;
	}
}