/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:41:55 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 15:33:36 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_pile **begin, char c, char **ret)
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
	ft_retour(ret, "r", c);
}

void	ft_rotate_all(t_pile **a, t_pile **b, char **ret)
{
	ft_rotate(a, 'a', NULL);
	ft_rotate(b, 'b', NULL);
	ft_retour(ret, "rr", 0);
}
