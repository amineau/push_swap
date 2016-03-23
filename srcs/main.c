/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 09:25:25 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 11:11:48 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile	**a;
	t_pile	**b;
	t_pile	*tmp;
	char	*str;

	ft_check_error(ac, &av[1]);
	a = (t_pile**)ft_memalloc(sizeof(t_pile*));
	b = (t_pile**)ft_memalloc(sizeof(t_pile*));
	ft_stockage_pile(&av[1], a);
	str = ft_reverse(a, 'a');
	tmp = *a;
	ft_printf("a : ");
	while (tmp && ac)
	{
		ft_printf("%d ", tmp->nb);
		tmp = tmp->next;
	}
	ft_printf("\n");
	tmp = *b;
	ft_printf("b : ");
	while (tmp && ac)
	{
		ft_printf("%d ", tmp->nb);
		tmp = tmp->next;
	}
	ft_printf("\n%s\n",str);
	return (0);
}
