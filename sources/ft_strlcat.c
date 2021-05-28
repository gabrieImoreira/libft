/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:52:21 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/18 20:30:30 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	d;
	unsigned int	j;
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = ft_strlen(src);
	d = ft_strlen(dest);
	j = s + d;
	if (size > d)
	{
		while (d + 1 < size && src[i] != '\0')
		{
			dest[d] = src[i];
			i++;
			d++;
		}
		dest[d] = '\0';
		return (j);
	}
	if (size == d)
		return (ft_strlen(src) + size);
	return (ft_strlen(src) + size);
}
