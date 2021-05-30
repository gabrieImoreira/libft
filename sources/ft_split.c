/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:09:06 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/30 12:38:02 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_init(int *x, int *y)
{
	*x = 0;
	*y = -1;
	return (0);
}

static char	**ft_array(const char *str, char c)
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

static char	**ft_free(char **str, int counter)
{
	int	i;

	i = 0;
	while (i < counter + 1)
		free(str[i++]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		counter;
	int		i;
	int		b;

	ft_init(&counter, &i);
	ptr = ft_array(s, c);
	if (!s || !ptr)
		return (NULL);
	while (s[++i] != '\0')
	{
		b = i;
		while (s[b] != c && s[b] != '\0')
			b++;
		if (b > i)
		{
			ptr[counter] = (char *)malloc(sizeof(char) * (b - i + 1));
			if (!ptr[counter])
				return (ft_free(ptr, counter));
			ft_strlcpy(ptr[counter++], s + i, b - i + 1);
			i = b - 1;
		}
	}
	ptr[counter] = 0;
	return (ptr);
}
