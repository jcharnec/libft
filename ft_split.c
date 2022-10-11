/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 22:47:30 by marvin            #+#    #+#             */
/*   Updated: 2022/10/11 13:34:58 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.
*/

#include "libft.h"
#include <stdlib.h>

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

static char	*ft_putword(char *word, char const *s, int i, int w_len)
{
	int	j;

	j = 0;
	while (w_len > 0)
	{
		word[j] = s[i - w_len];
		j++;
		w_len--;
	}
	word[j] = '\0';
	return (word);
}

// falta funcion free

static char	**ft_split_words(char const *s, char c, char **s2, int n_words)
{
	int	i;
	int	word;
	int	w_len;

	i = 0;
	word = 0;
	w_len = 0;
	while (word < n_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			w_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (!s2)
			return (0);
		ft_putword(s2[word], s, i, w_len);
		w_len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	n_words;

	if (!s)
		return (0);
	n_words = ft_cnt_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!s2)
		return (0);
	ft_split_words(s, c, s2, n_words);
	return (s2);
}
