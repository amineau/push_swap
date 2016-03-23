/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:50:07 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 17:38:16 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse(t_pile **begin, char c, char **ret)
{
	t_pile	*tmp;

	tmp = *begin;
	if (tmp && tmp->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		ft_lst_add_start(begin, tmp->next);
		tmp->next = NULL;
	}
	ft_retour(ret, "rr", c);
}

void	ft_reverse_all(t_pile **a, t_pile **b, char **ret)
{
	ft_reverse(a, 'a', NULL);
	ft_reverse(b, 'b', NULL);
	ft_retour(ret, "rrr", 0);
}
