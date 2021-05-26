/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:59:53 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/25 21:29:36 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t counter;
	char *ptr;
	counter = ft_strlen(s);
	ptr = malloc(sizeof(char) * (counter + 1));
	if (!ptr)
		return (NULL);
	while (counter > 0)
	{
		ptr[counter] = f(counter, s[counter]);
		counter--;
	}
	return(ptr);
}
