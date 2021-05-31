/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:02:48 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/31 19:45:52 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_str;
	size_t	i;

	i = 0;
	ptr_str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!ptr_str || s == NULL)
		return (NULL);
	while (i < len && start < ft_strlen(s))
		ptr_str[i++] = s[start++];
	ptr_str[i] = '\0';
	return (ptr_str);
}
