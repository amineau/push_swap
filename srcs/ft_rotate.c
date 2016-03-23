/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:41:55 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 11:08:45 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_rotate(t_pile **begin, char c)
{
	t_pile	*tmp;
	t_pile	*tmp2;

	tmp = *begin;
	if (tmp && tmp->next)
	{
		*begin = tmp->next;
		tmp2 = *begin;
		tmp->next = NULL;
		while (tmp2->next)
			tmp2 = tmp2->next;
		tmp2->next = tmp;
	}
	return (ft_straddc(ft_strdup("r"), c));
}

char	*ft_rotate_all(t_pile **a, t_pile **b)
{
	ft_rotate(a, 'a');
	ft_rotate(b, 'b');
	return (ft_strdup("rr"));
}
