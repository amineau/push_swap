/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 09:25:25 by amineau           #+#    #+#             */
/*   Updated: 2016/03/24 18:09:13 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile	**a;
	t_pile	**b;
	char	*ret;


	ft_check_error(ac, &av[1]);
	a = (t_pile**)ft_memalloc(sizeof(t_pile*));
	b = (t_pile**)ft_memalloc(sizeof(t_pile*));
	ft_stockage_pile(&av[1], a);
	ret = NULL;
	ft_selection(a, b, &ret);

	return (0);
}
