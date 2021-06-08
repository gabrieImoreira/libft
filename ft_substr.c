/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:02:48 by gantonio          #+#    #+#             */
/*   Updated: 2021/06/05 18:00:07 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_str;
	size_t	s_len;
	size_t	max_size;

	max_size = 0;
	s_len = ft_strlen((char *)s);
	if (start < s_len)
		max_size = s_len - start;
	if (max_size > len)
		max_size = len;
	ptr_str = malloc(sizeof(char) * (max_size + 1));
	if (!ptr_str)
		return (NULL);
	ft_strlcpy(ptr_str, s + start, max_size + 1);
	return (ptr_str);
}
