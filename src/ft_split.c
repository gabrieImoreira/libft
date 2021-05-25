/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:09:06 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/24 21:48:26 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_array(const char *str, char c)
{
	char	**arr;
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		counter++;
		while (str[i] && str[i] == c)
			i++;
	}
	arr = (char **)malloc((counter + 1) * sizeof(char *));
	return (arr);
}

static	char	**ft_free(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count + 1)
		free(str[i++]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		count;
	int		i;
	int		b;

	count = 0;
	i = -1;
	str = ft_array(s, c);
	if (!s || !str)
		return (NULL);
	while (s[++i] != '\0')
	{
		b = i;
		while (s[b] != c && s[b] != '\0')
			b++;
		if (b > i)
		{
			str[count] = (char *)malloc(sizeof(char) * (b - i + 1));
			if (!str[count])
				return (ft_free(str, count));
			ft_strlcpy(str[count++], s + i, b - i + 1);
			i = b - 1;
		}
	}
	str[count] = 0;
	return (str);
}
