/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 09:25:25 by amineau           #+#    #+#             */
/*   Updated: 2016/03/29 18:24:06 by amineau          ###   ########.fr       */
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

int     ft_piv(t_pile **begin, int div)
{
    t_pile  *tmp;
    t_pile  *tmp2;
    int     aft;
    int     bef;
    div = 0;
       
    tmp = *begin;
    while (tmp)
    {
        aft = 0;
        bef = 0;
        tmp2 = *begin;
        while (tmp2)
        {
            if (tmp2->nb < tmp->nb)
                bef++;
            else if (tmp2->nb > tmp->nb)
                aft++;
            tmp2 = tmp2->next;
        }
        if (aft <= bef + 1 && aft >= bef - 1)
            return tmp->nb;
        tmp = tmp->next;
    }
    return (0);
}

void    ft_sort(t_pile **a, t_pile **b, t_flag *f)
{
  //  int piv;
    int c = f->n;
    
    ft_printf("%d\n", ft_piv(a, 1));
    ft_printf("%d\n", ft_piv(b, 1));
    
}