/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:28:34 by amineau           #+#    #+#             */
/*   Updated: 2016/03/29 15:45:27 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapa(t_pile **a, t_pile **b, t_flag *f)
{
	t_pile	*tmp;

	tmp = *a;
	if (tmp && tmp->next)
	{
		*a = tmp->next;
		tmp->next = tmp->next->next;
		(*a)->next = tmp;
	}
	//ft_retour(&(f->ret), "sa");
	ft_putope("sa", f);
	ft_display(a, b, f);
}

void	ft_swapb(t_pile **a, t_pile **b, t_flag *f)
{
	t_pile	*tmp;

	tmp = *b;
	if (tmp && tmp->next)
	{
		*b = tmp->next;
		tmp->next = tmp->next->next;
		(*b)->next = tmp;
	}
	//ft_retour(&(f->ret), "sb");
	ft_putope("sb", f);
	ft_display(a, b, f);
}

void	ft_swap_all(t_pile **a, t_pile **b, t_flag *f)
{
	ft_swapa(a, b, NULL);
	ft_swapb(a, b, NULL);
	//ft_retour(&(f->ret), "ss");
	ft_putope("ss", f);
	ft_display(a, b, f);
}
