/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_pile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 17:38:38 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 18:36:48 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_size_pile(t_pile **begin)
{
	t_pile	*tmp;
	int		cnt;

	cnt = 0;
	tmp = *begin;
	while (tmp)
	{
		tmp = tmp->next;
		cnt++;
	}
	return (cnt);
}
