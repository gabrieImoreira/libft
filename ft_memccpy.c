/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:35:44 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/17 19:55:23 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memccpy( void* dest, const void* src, int c, size_t len)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;
	size_t				i;

	ptr_dest = dest;
	ptr_src = src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < len && ptr_src[i] != c)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (NULL);