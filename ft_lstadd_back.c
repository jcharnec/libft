/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <xjpeterx@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:20:18 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 00:20:18 by jcharnec         ###   ########.fr       */
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