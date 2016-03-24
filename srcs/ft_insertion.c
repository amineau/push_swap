/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 16:59:26 by amineau           #+#    #+#             */
/*   Updated: 2016/03/24 18:09:11 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_min(t_pile **begin, char **ret)
{
	t_pile	*tmp;
	int		min;
	int		pos;
	int		cnt;

	cnt = 1;
	tmp = (*begin)->next;
	min = (*begin)->nb;
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
	if (pos < cnt / 2)
	{
		while (pos-- != 1)
			ft_rotate(begin, 'a', ret);
	}
	else if (cnt != 1)
	{
		while (cnt - pos++ != -1)
			ft_reverse(begin, 'a', ret);
	}
}

void	ft_selection(t_pile **a, t_pile **b, char **ret)
{
	while (*a)
	{
		ft_find_min(a, ret);
		ft_push(b, a, 'b', ret);
		ft_display(a, b, *ret);
	}
	while (*b)
	{
		ft_push(a, b, 'a', ret);
		ft_display(a, b, *ret);
	}
}
