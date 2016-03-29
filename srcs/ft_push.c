/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:36:04 by amineau           #+#    #+#             */
/*   Updated: 2016/03/29 15:45:40 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pusha(t_pile **a, t_pile **b, t_flag *f)
{
	t_pile	*tmp;

	if (*b)
	{
		tmp = (*b)->next;
		(*b)->next = *a;
		*a = *b;
		*b = tmp;
	}
	//ft_retour(&(f->ret), "pa");
	ft_putope("pa", f);
	ft_display(a, b, f);
}

void	ft_pushb(t_pile **a, t_pile **b, t_flag *f)
{
	t_pile	*tmp;

	if (*a)
	{
		tmp = (*a)->next;
		(*a)->next = *b;
		*b = *a;
		*a = tmp;
	}
	//ft_retour(&(f->ret), "pb");
	ft_putope("pb", f);
	ft_display(a, b, f);
}
