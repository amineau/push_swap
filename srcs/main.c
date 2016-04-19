/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 09:25:25 by amineau           #+#    #+#             */
/*   Updated: 2016/03/29 18:24:06 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile	**a;
	t_pile	**b;
	t_flag	*f;

	f = ft_flag(&av[1], ac);
	if (f->argv == ac)
		exit(1);
	ft_check_error(&av[f->argv], f);
	a = (t_pile**)ft_memalloc(sizeof(t_pile*));
	b = (t_pile**)ft_memalloc(sizeof(t_pile*));
	ft_stockage_pile(&av[f->argv], a, f);
//	ft_selection(a, b, f);
	ft_sort(a, b, f);
	f->v = 1;
	ft_display(a, b, f);

	return (0);
}
