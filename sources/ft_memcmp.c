/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:52:27 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/18 18:28:23 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	size_t			i;
	unsigned char	*ptr_str1;
	unsigned char	*ptr_str2;

	ptr_str1 = (unsigned char *)str1;
	ptr_str2 = (unsigned char *)str2;
	i = 0;
	while ((ptr_str1[i] == ptr_str2[i]) && i < len)
		i++;
	if (i != len)
	{
		if (ptr_str1[i] - ptr_str2[i] > 1)
			return (1);
		else
			return (-1);
	}	
	return (0);
}
