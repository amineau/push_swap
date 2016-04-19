/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_sort.c                                     :+:      :+:    :+:   */
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

int     ft_piv(t_pile **begin, int *bef)
{
    t_pile  *tmp;
    t_pile  *tmp2;
    int     aft;
       
    tmp = *begin;
    while (tmp)
    {
        aft = 0;
        *bef = 0;
        tmp2 = *begin;
        while (tmp2)
        {
            if (tmp2->nb < tmp->nb)
                (*bef)++;
            else if (tmp2->nb > tmp->nb)
                aft++;
            tmp2 = tmp2->next;
        }
        if (aft <= *bef && aft >= *bef - 1)
            return (tmp->nb);
        tmp = tmp->next;
    }
    return (0);
}

void    ft_sort(t_pile **a, t_pile **b, t_flag *f)
{
    int     piv;
    int     bef;
    int     i;
    t_pile  *tmp;

    bef = 0;
    i = 0;
    tmp = *a;
    piv = ft_piv(a, &bef);
    while (bef - i > 0)
    {
        if ((*a)->nb < piv){
            ft_pushb(a, b, f);
            i++;
        }
        else
            ft_rotatea(a, b, f);
    }
    ft_selection(a, b, f, bef);
}

int     ft_check_sort(t_pile **begin)
{
    t_pile  *tmp;

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

int     ft_find_max(t_pile **begin)
{
    t_pile  *tmp;
    int     res;

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

int     ft_find_min(t_pile **begin)
{
    t_pile  *tmp;
    int     res;

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

int     ft_pos_val(t_pile **begin, int val)
{
    t_pile  *tmp;
    int     pos;

    tmp = *begin;
    pos = 1;
    while (tmp->nb != val)
    {
        tmp = tmp->next;
        pos++;
    }
    return (pos);
}

void    ft_prepa_push_min(t_pile **a, t_pile **b, t_flag *f)
{
    int min;

    min = ft_find_min(a);
    if (ft_pos_val(a, min) <= (ft_length_pile(a) + 1) / 2)
    {
        while ((*a)->nb != min)
            ft_rotatea(a, b, f);
    }
    else
    {
        while ((*a)->nb != min)
            ft_reversea(a, b, f);
    }
}

void    ft_prepa_push_max(t_pile **a, t_pile **b, t_flag *f)
{
    int max;

    max = ft_find_max(b);
    if (ft_pos_val(b, max) <= (ft_length_pile(b) + 1) / 2)
    {
        while ((*b)->nb != max)
            ft_rotateb(a, b, f);
    }
    else
    {
        while ((*b)->nb != max)
            ft_reverseb(a, b, f);
    }
}


void    ft_selection(t_pile **a, t_pile **b, t_flag *f, int bef)
{
    int i;

    i = 0;
    while (!ft_check_sort(a))
    {
        
        ft_prepa_push_min(a, b, f);
        if (!ft_check_sort(a))
        {
            ft_pushb(a, b, f);
            i++;
        }
    }
    while (i-- > 0)
        ft_pusha(a, b, f);
    while (*b)
    {
        ft_prepa_push_max(a, b, f);
        ft_pusha(a, b, f);
    }
}