/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:04:40 by gantonio          #+#    #+#             */
/*   Updated: 2021/05/27 22:53:20 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		status;
	long	n2;

	n2 = n;
	status = 1;
	i = ft_len(n);
	if (n2 < 0)
	{
		n2 *= -1;
		status = 0;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i--] = '\0';
	if (n2 == 0)
		ptr[i] = '0';
	while (n2 > 0)
	{
		ptr[i--] = (n2 % 10) + '0';
		n2 /= 10;
	}
	if (status == 0)
		ptr[i] = '-';
	return (ptr);
}
