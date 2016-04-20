/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 17:05:10 by amineau           #+#    #+#             */
/*   Updated: 2016/04/21 00:39:15 by amineau          ###   ########.fr       */
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
		if (f->c == 1)
			ft_printf("\033[32m");
		ft_printf("%s", str);
		if (f->c == 1)
			ft_printf("\033[00m");
		f->total++;
	}
}

void	ft_pile_show(t_pile *tmp)
{
	while (tmp)
	{
		ft_printf("%d", tmp->nb);
		if (tmp->next)
			ft_printf(" | ");
		tmp = tmp->next;
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
		ft_pile_show(tmp);
		ft_printf("\n-------------------------------\n");
		tmp = *b;
		ft_printf("b : ");
		ft_pile_show(tmp);
		ft_printf("\n*******************************\n");
		if (f->n == 1)
			ft_printf("Number of operation : %d\n\n", f->total);
	}
}

void	ft_display_help(void)
{
	char	*h;
	char	*n;
	char	*v;
	char	*e;
	char	*c;

	h = "Shows help.";
	n = "Shows the number of operations.";
	v = "Shows the state of piles has every iteration.";
	e = "If the function returns an error, describes the error.";
	c = "Shows the operations in color.";
	ft_printf("\n\t-h\t%s\n\t-n\t%s\n\t-v\t%s\n\t-e\t%s\n\t-c\t%s\n",
			h, n, c, e, c);
}
