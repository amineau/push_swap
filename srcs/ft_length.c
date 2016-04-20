/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 23:13:40 by amineau           #+#    #+#             */
/*   Updated: 2016/04/21 00:00:15 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_length_pile(t_pile **begin)
{
	t_pile	*tmp;
	int		cnt;

	cnt = 0;
	tmp = *begin;
	while (tmp)
	{
		cnt++;
		tmp = tmp->next;
	}
	return (cnt);
}

int		ft_find_max(t_pile **begin)
{
	t_pile	*tmp;
	int		res;

	tmp = (*begin)->next;
	res = (*begin)->nb;
	while (tmp)
	{
		if (res < tmp->nb)
			res = tmp->nb;
		tmp = tmp->next;
	}
	return (res);
}

int		ft_find_min(t_pile **begin)
{
	t_pile	*tmp;
	int		res;

	tmp = (*begin)->next;
	res = (*begin)->nb;
	while (tmp)
	{
		if (res > tmp->nb)
			res = tmp->nb;
		tmp = tmp->next;
	}
	return (res);
}

int		ft_check_sort(t_pile **begin)
{
	t_pile	*tmp;

	tmp = *begin;
	if (tmp)
	{
		while (tmp->next)
		{
			if (tmp->nb > tmp->next->nb)
				return (0);
			tmp = tmp->next;
		}
	}
	return (1);
}
