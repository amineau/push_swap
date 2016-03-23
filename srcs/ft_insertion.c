/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 16:59:26 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 18:36:45 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_insertion(t_pile **a, t_pile **b, int nbr, char **ret)
{
	t_pile	*tmpa;
	int		cnt;

	tmpa = *a;
	while (ft_size_pile(b) < nbr / 2)
	{
	cnt = 1;
	tmpa = *a;
		while (tmpa->next && tmpa->nb < tmpa->next->nb)
		{
			cnt++;
			tmpa = tmpa->next;
		}
		if (tmpa->next)
		{
			if (cnt < nbr / 2)
			{
				while (cnt-- != 0)
					ft_rotate(a, 'a', ret);
				ft_push(b, a, 'b', ret);
			}
			else
			{
				cnt = nbr - cnt;
				while (cnt-- != 0)
					ft_reverse(a, 'a', ret);
				ft_push(b, a, 'b', ret);
			}
		}
		else
			break;
	}
}
