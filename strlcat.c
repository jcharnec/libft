/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharnec <jcharnec@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:56:23 by jcharnec          #+#    #+#             */
/*   Updated: 2022/09/01 20:27:37 by jcharnec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	if (size == 0 || size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i = ft_strlen(dest);
	c = 0;
	while (src[c] != '\0' && c < (size - ft_strlen(dest) - 1))
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (i + ft_strlen(src));
}
