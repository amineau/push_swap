/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 09:25:25 by amineau           #+#    #+#             */
/*   Updated: 2016/03/24 14:13:14 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile	**a;
	t_pile	**b;
	t_pile	*tmp;
	char	*ret;
	int		nbr_elem;

	ft_check_error(ac, &av[1]);
	a = (t_pile**)ft_memalloc(sizeof(t_pile*));
	b = (t_pile**)ft_memalloc(sizeof(t_pile*));
	nbr_elem = ft_stockage_pile(&av[1], a);
	ret = NULL;
	ft_insertion(a, b, nbr_elem, &ret);
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
	ft_printf("\n%s\n",ret);
	return (0);
}
