/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:56:33 by jcharnec          #+#    #+#             */
/*   Updated: 2022/09/22 13:22:51 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
//# include<string.h>

int             ft_isalnum(int c);
int	            ft_isalpha(int c);
size_t	        ft_strlen(const char *s);
int             ft_atoi(char *str);
int             ft_isascii(int c);
int             ft_isascii(int c);
int             ft_isdigit(int c);
int             ft_isprint(int c);
char            *ft_strchr(const char *s, int c);
size_t	        ft_strlen(const char *s);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
size_t	        ft_strlcpy(char *dest, const char *src, size_t size);
int	            ft_strncmp(char *s1, char *s2, unsigned int n);
char            ft_strnstr(const char *s1, const char *s2, size_t n);
int             ft_tolower(int c);
int             ft_toupper(int c);

#endif