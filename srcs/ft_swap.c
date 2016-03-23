/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:28:34 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 09:45:58 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_swap(t_pile **begin, char c)
{
	t_pile	*tmp;

	tmp = *begin;
	if (tmp && tmp->next)
	{
		*begin = tmp->next;
		tmp->next = tmp->next->next;
		(*begin)->next = tmp;
	}
	return (ft_straddc(ft_strdup("s"), c));
}

char	*ft_swap_all(t_pile **a, t_pile **b)
{
	ft_swap(a, 'a');
	ft_swap(b, 'b');
	return (ft_strdup("ss"));
}
