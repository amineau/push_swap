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
		if (f->esc != 0 && f->v != 1)
			ft_putchar(' ');
		else
			f->esc = 1;
		if (f->d == 0)
			ft_printf("%s", str);
		f->total++;
	}
}

void	ft_display(t_pile **a, t_pile **b, t_flag *f)
{
	t_pile	*tmp;

	tmp = *a;
	if (f->v == 1)
	{
			ft_printf("\n*******************************");
			ft_printf("\na : ");
			while (tmp)
			{
				ft_printf("%d", tmp->nb);
				if (tmp->next)
					ft_printf(" | ");
				tmp = tmp->next;
			}
			ft_printf("\n-------------------------------\n");
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
			if (f->n == 1)
				ft_printf("Number of operation : %d\n\n", f->total);
	}
}

void	ft_display_help(void)
{
	ft_printf("\n\t-h\tShows help.\n\t-n\tShows the number of operations. \
If it is combined with -v, shows the number of operations has every \
iteration.\n\t-v\tShows the state of piles has every iteration.\n\t-e\t\
If the function returns an error, describes the error.\n\t-d\t?? No se ??\n");
}