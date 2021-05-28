/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:52:48 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/27 20:46:41 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
