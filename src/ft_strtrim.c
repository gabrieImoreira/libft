/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:40:47 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/24 15:23:35 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim2(char const *s1, char const *set)
{
	char	*ptr;
	size_t i;
	size_t c;

	i = 0;
	c = 0;
	ptr = malloc(sizeof(char));
	if (!ptr || !s1)
		return (NULL);
	while(s1[c])
	{
		if(s1[c] != *set)
		{
			ptr[i] = s1[c];
			i++;
		}
		c++;
	}
	ptr[i] = '\0';
	return (ptr);
}