/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:50:07 by amineau           #+#    #+#             */
/*   Updated: 2016/03/29 15:46:08 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reversea(t_pile **a, t_pile **b, t_flag *f)
{
	t_pile	*tmp;

	tmp = *a;
	if (tmp && tmp->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		ft_lst_add_start(a, tmp->next);
		tmp->next = NULL;
	}
	ft_putope("rra", f);
	ft_display(a, b, f);
}

void	ft_reverseb(t_pile **a, t_pile **b, t_flag *f)
{
	t_pile	*tmp;

	tmp = *b;
	if (tmp && tmp->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		ft_lst_add_start(b, tmp->next);
		tmp->next = NULL;
	}
	ft_putope("rrb", f);
	ft_display(a, b, f);
}

void	ft_reverse_all(t_pile **a, t_pile **b, t_flag *f)
{
	ft_reversea(a, b, NULL);
	ft_reverseb(a, b, NULL);
	ft_putope("rrr", f);
	ft_display(a, b, f);
}
