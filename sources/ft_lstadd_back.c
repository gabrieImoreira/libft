/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:48:23 by gantonio          #+#    #+#             */
/*   Updated: 2021/06/03 16:33:32 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst|| !new)
		return ;
	if (!*lst)
		*lst = new;
	tmp = ft_lstlast(*lst);
	if (tmp)
		tmp->next = new;
	else
		*lst = new;
}
