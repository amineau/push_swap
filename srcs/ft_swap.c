/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:28:34 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 13:51:02 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_pile **begin, char c, char **ret)
{
	t_pile	*tmp;

	tmp = *begin;
	if (tmp && tmp->next)
	{
		*begin = tmp->next;
		tmp->next = tmp->next->next;
		(*begin)->next = tmp;
	}
	ft_retour(ret, "s", c);
}

void	ft_swap_all(t_pile **a, t_pile **b, char **ret)
{
	ft_swap(a, 'a', NULL);
	ft_swap(b, 'b', NULL);
	ft_retour(ret, "ss", 0);
}
