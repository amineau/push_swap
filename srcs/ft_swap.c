/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:28:34 by amineau           #+#    #+#             */
/*   Updated: 2016/03/22 17:34:29 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_pile **begin)
{
	t_pile	*tmp;

	tmp = *begin;
	if (tmp && tmp->next)
	{
		*begin = tmp->next;
		tmp->next = tmp->next->next;
		*begin->next = tmp;
	}
}

void	ft_swap_all(t_pile **a, t_pile **b)
{
	ft_swap(a);
	ft_swap(b);
}
