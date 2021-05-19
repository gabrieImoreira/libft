/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 22:59:06 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/19 17:02:04 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	c = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[c])
	{
		i = 0;
		while (big[c + i] == little[i] && big[c + i] != '\0' && (c + i) < len)
		{
			if (little[i + 1] == '\0')
				return ((char *)big + c);
			i++;
		}
		c++;
	}
	return (NULL);
}
