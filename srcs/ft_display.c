/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 17:05:10 by amineau           #+#    #+#             */
/*   Updated: 2016/03/29 18:24:02 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putope(char *str, t_flag *f)
{
	if (f)
	{
		if (f->d == 0)
			ft_printf("%s ", str);
		f->total++;
	}
}

void	ft_display(t_pile **a, t_pile **b, t_flag *f)
{
	t_pile	*tmp;

	if (f->v == 1)
	{
		tmp = *a;

		if (f->h == 1)
		{
			ft_printf("*******************************");
			ft_printf("\na : ");
			while (tmp)
			{
				ft_printf("%d", tmp->nb);
				if (tmp->next)
					ft_printf(" | ");
				tmp = tmp->next;
			}
			ft_printf("\n*******************************\n");
			tmp = *b;
			ft_printf("b : ");
			while (tmp)
			{
				ft_printf("%d", tmp->nb);
				if (tmp->next)
					ft_printf(" | ");
				tmp = tmp->next;
			}
			ft_printf("\n*******************************\n");
		}
		if (f->n == 1)
			ft_printf("Number of operation : %d\n", f->total);
	}
}
