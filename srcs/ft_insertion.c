/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 16:59:26 by amineau           #+#    #+#             */
/*   Updated: 2016/03/29 18:24:00 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_check_sort(t_pile **begin)
{
	t_pile	*tmp;

	tmp = *begin;
	while (tmp->next)
	{
		if (tmp->nb > tmp->next->nb)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int		ft_length_pile(t_pile **begin)
{
	t_pile	*tmp;
	int		cnt;

	cnt = 0
	tmp = *begin;
	while (tmp)
	{
		cnt++;
		tmp = tmp->next;
	}
	return (cnt);
}

int		ft_pos_min(t_pile **begin)
{
	t_pile	*tmp;
	int		min;
	int		cnt;
	int		pos;

	tmp = (*begin)->next;
	min = (*begin)->nb;
	cnt = 1;
	pos = 1;
	while (tmp)
	{
		cnt++;
		if (tmp->nb < min)
		{
			pos = cnt;
			min = tmp->nb;
		}
		tmp = tmp->next;
	}
	return (pos);
}

int		ft_pos_max(t_pile **begin)
{
	t_pile	*tmp;
	int		max;
	int		cnt;
	int		pos;

	tmp = (*begin)->next;
	max = (*begin)->nb;
	cnt = 1;
	pos = 1;
	while (tmp)
	{
		cnt++;
		if (tmp->nb > max)
		{
			pos = cnt;
			min = tmp->nb;
		}
		tmp = tmp->next;
	}
	return (pos);
}

void	ft_find_min(t_pile **a, t_pile **b, t_flag *f)
{
	int		pos;
	int		cnt;
	int		bol;


	cnt = ft_length_pile(a);
	
	bol = 1;
	if (pos < cnt / 2)
	{
		while (pos-- != 1 && bol == 1)
		{
			if ((*a)->nb > (*a)->next->nb)
				ft_swapa(a, b, f);
		if (!ft_check_sort(a) && (*a)->nb != min)
			ft_rotatea(a, b, f);
		else
			bol = 0;
		}
	}
	else if (cnt != 1)
	{
		while (cnt - pos++ != -1 && bol == 1)
		{
			if ((*a)->nb > (*a)->next->nb)
				ft_swapa(a, b, f);
		if (!ft_check_sort(a) && (*a)->nb != min)
			ft_reversea(a, b, f);
		else
			bol = 0;
		}
	}
}

void	ft_selection(t_pile **a, t_pile **b, t_flag *f)
{
	while (!ft_check_sort(a))
	{
		ft_find_min(a, b, f);
		if (!ft_check_sort(a))
			ft_pushb(a, b, f);
	}
	while (*b)
		ft_pusha(a, b, f);
}
