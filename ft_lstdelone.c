/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:05:56 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:05:56 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free (lst);
	}
}