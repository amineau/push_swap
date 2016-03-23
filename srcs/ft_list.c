/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 16:13:16 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 10:27:12 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	*ft_lst_new(int nb)
{
	t_pile	*lst;

	lst = (t_pile*)ft_memalloc(sizeof(t_pile));
	lst->nb = nb;
	lst->next = NULL;
	return (lst);
}

void	ft_lst_add_start(t_pile **begin, t_pile *lst)
{
	t_pile	*tmp;

	tmp = *begin;
	*begin = lst;
	lst->next = tmp;
}

void	ft_lst_add_end(t_pile **begin, t_pile *lst)
{
	t_pile	*tmp;

	tmp = *begin;
	if (!tmp)
		*begin = lst;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = lst;
		lst->next = NULL;
	}
}
