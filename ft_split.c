/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:10:28 by jcharnec          #+#    #+#             */
/*   Updated: 2022/10/26 10:10:28 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Descripcion
	Reserva (utilizando malloc(3)) un array de strings
	resultante de separar la string ’s’ en substrings
	utilizando el caracter ’c’ como delimitador. El
	array debe terminar con un puntero NULL.
	Parámetros 
	s: La string a separar.
	c: El carácter delimitador.
	Valor devuelto 
	El array de nuevas strings resulatente de la
	separación.
	NULL si falla la reserva de memoria.*/

#include "libft.h"

static int	ft_cnt_words(char const *str, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			cnt++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (cnt);
}

static void	ft_free(char **strs, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static char	**ft_split_words(char const *s, char c, char **s2, size_t i)
{
	int		j;
	size_t	start;

	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i ++;
		else
		{
			start = i;
			while (s[i] != c && i < ft_strlen(s))
				i++;
			s2[j] = ft_substr(s, start, (i - start));
			if (!s2[j])
			{
				ft_free(s2, j);
				return (NULL);
			}
			j++;
		}
	}
	s2[j] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char	**s2;
	size_t	n_words;
	size_t	i;

	n_words = ft_cnt_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!s2)
		return (0);
	i = 0;
	return (ft_split_words(s, c, s2, i));
}
