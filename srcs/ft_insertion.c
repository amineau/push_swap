/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 16:59:26 by amineau           #+#    #+#             */
/*   Updated: 2016/04/20 23:19:01 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_prepa_push_short(t_pile **a, t_pile **b, t_flag *f)
{
	int min;

	min = ft_find_min(a);
	if (ft_pos_val(a, min) <= (ft_length_pile(a) + 1) / 2)
	{
		while ((*a)->nb != min)
		{
			if ((*a)->nb > (*a)->next->nb)
				ft_swapa(a, b, f);
			if ((*a)->nb != min)
				ft_rotatea(a, b, f);
		}
	}
	else
	{
		while ((*a)->nb != min)
		{
			if ((*a)->nb > (*a)->next->nb)
				ft_swapa(a, b, f);
			if ((*a)->nb != min)
				ft_reversea(a, b, f);
		}
	}
}

void	ft_selection_short(t_pile **a, t_pile **b, t_flag *f)
{
	ft_sort_by_end(a, b, f);
	while (!ft_check_sort(a))
	{
		ft_prepa_push_short(a, b, f);
		if (!ft_check_sort(a))
			ft_pushb(a, b, f);
	}
	while (*b)
		ft_pusha(a, b, f);
}

int		ft_size_sort(t_pile **begin)
{
	t_pile	*tmp;
	t_pile	*tmp2;
	int		cnt;

	tmp = *begin;
	cnt = 0;
	if (tmp)
	{
		while (tmp->next)
		{
			cnt++;
			if (tmp->nb > tmp->next->nb)
				return (cnt);
			tmp2 = tmp->next;
			while (tmp2)
			{
				if (tmp->nb > tmp2->nb)
					return (cnt);
				tmp2 = tmp2->next;
			}
			tmp = tmp->next;
		}
	}
	return (0);
}

void	ft_end_reverse(t_pile **a, t_pile **b, t_flag *f)
{
	ft_reversea(a, b, f);
	ft_reversea(a, b, f);
	ft_swapa(a, b, f);
	ft_rotatea(a, b, f);
	ft_rotatea(a, b, f);
}

void	ft_sort_by_end(t_pile **a, t_pile **b, t_flag *f)
{
	int cnt;

	cnt = ft_length_pile(a) - ft_size_sort(a);
	if (cnt < ft_length_pile(a) / 2)
	{
		if (cnt == 1)
			ft_end_reverse(a, b, f);
		else
		{
			while (cnt-- >= 0)
			{
				ft_reversea(a, b, f);
				ft_pushb(a, b, f);
			}
			while (*b)
			{
				ft_prepa_push(a, b, f, "b-");
				ft_pusha(a, b, f);
				ft_rotatea(a, b, f);
			}
		}
	}
}
