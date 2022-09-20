/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:56:33 by jcharnec          #+#    #+#             */
/*   Updated: 2022/09/20 12:19:15 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
//# include<string.h>

int     ft_isalnum(int c);
int	    ft_isalpha(int c);
size_t	ft_strlen(const char *s);

#endif