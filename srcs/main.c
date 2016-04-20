/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 09:25:25 by amineau           #+#    #+#             */
/*   Updated: 2016/04/21 00:15:44 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile	**a;
	t_pile	**b;
	t_flag	*f;

	f = ft_flag(&av[1], ac);
	ft_check_error(&av[f->argv], f);
	a = (t_pile**)ft_memalloc(sizeof(t_pile*));
	b = (t_pile**)ft_memalloc(sizeof(t_pile*));
	ft_stockage_pile(&av[f->argv], a, f);
	if (ft_length_pile(a) < 50)
		ft_selection_short(a, b, f);
	else
		ft_sort(a, b, f);
	if (f->n == 1 && f->v == 0)
		ft_printf("\nNumber of operation : %d\n", f->total);
	else if (f->v == 0)
		ft_putchar('\n');
	if (f->h)
		ft_display_help();
	return (0);
}
