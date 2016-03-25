/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:41:55 by amineau           #+#    #+#             */
/*   Updated: 2016/03/25 15:37:06 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotatea(t_pile **a, t_pile **b, t_flag *f)
{
	t_pile	*tmp;
	t_pile	*tmp2;

	tmp = *a;
	if (tmp && tmp->next)
	{
		*a = tmp->next;
		tmp2 = *a;
		tmp->next = NULL;
		while (tmp2->next)
			tmp2 = tmp2->next;
		tmp2->next = tmp;
	}
	ft_retour(&(f->ret), "ra");
	ft_display(a, b, f);
}

void	ft_rotateb(t_pile **a, t_pile **b, t_flag *f)
{
	t_pile	*tmp;
	t_pile	*tmp2;

	tmp = *b;
	if (tmp && tmp->next)
	{
		*b = tmp->next;
		tmp2 = *b;
		tmp->next = NULL;
		while (tmp2->next)
			tmp2 = tmp2->next;
		tmp2->next = tmp;
	}
	ft_retour(&(f->ret), "rb");
	ft_display(a, b, f);
}

void	ft_rotate_all(t_pile **a, t_pile **b, t_flag *f)
{
	ft_rotatea(a, b, NULL);
	ft_rotateb(a, b, NULL);
	ft_retour(&(f->ret), "rr");
	ft_display(a, b, f);
}
