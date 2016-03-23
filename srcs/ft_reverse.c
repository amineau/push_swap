/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 17:50:07 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 11:11:47 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_reverse(t_pile **begin, char c)
{
	t_pile	**new;
	t_pile	*tmp;
	t_pile	*tmp2;

	new = (t_pile**)ft_memalloc(sizeof(t_pile*));
	tmp = *begin;
	while (tmp)
	{
		tmp2 = tmp->next;
		ft_lst_add_end(new, tmp);
		tmp = tmp2;
		ft_printf("%d\n", tmp->nb);
	}
	free(begin);
	begin = new;
	return (ft_straddc(ft_strdup("rr"), c));
}

char	*ft_reverse_all(t_pile **a, t_pile **b)
{
	ft_reverse(a, 'a');
	ft_reverse(b, 'b');
	return (ft_strdup("rrr"));
}
