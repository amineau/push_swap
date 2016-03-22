/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:41:55 by amineau           #+#    #+#             */
/*   Updated: 2016/03/22 17:55:08 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_pile **begin)
{
	t_pile	*tmp;
	t_pile	*tmp2;

	if (tmp && tmp->next)
	{
		tmp = *begin;
		**begin = &tmp->next;
		tmp2 = *begin;
		tmp->next = NULL;
		while (tmp2->next)
			tmp2 = tmp2->next;
		tmp2->next = tmp;
	}
}

void	ft_rotate_all(t_pile **a, t_pile **b)
{
	ft_rotate(a);
	ft_rotate(b);
}
