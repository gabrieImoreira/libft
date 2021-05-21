/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:02:48 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/20 22:16:49 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_str;
	size_t i;
	
	i = 0;
	if (s == NULL || !(ptr_str = (char *)malloc(len + 1 * sizeof(char))))
		return (NULL);
	while(i < len && start < ft_strlen(s))
		ptr_str[i++] = s[start++];
	ptr_str[i] = '\0';
	return(ptr_str);
}