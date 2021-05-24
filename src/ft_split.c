/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:09:06 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/24 19:21:34 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countchar(const char *str, char c, int opt_delimit)
{
	
}

static size_t	ft_countword(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char			**ft_split(char const *s, char c)
{
	char	*ptr;
	char	**array;
	size_t	counter_c;
	size_t	counter;
	size_t	i;

	counter_c = 0;
	counter = 0;
	array = malloc(sizeof(char) * 4);
	while(s[i])
	{
		counter_c = ft_countword(s, c);
		array[counter] = ft_substr(s, 0, counter_c);
		counter++;
		i++; 
	}
	array[counter] = NULL; 
	
	return (array);
	
}
