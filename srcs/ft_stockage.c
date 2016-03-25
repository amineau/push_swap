/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stockage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 09:36:44 by amineau           #+#    #+#             */
/*   Updated: 2016/03/25 14:32:48 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stockage_pile(char **str, t_pile **begin, t_flag *f)
{
	int i;

	i = 0;
	while (str[i])
		ft_lst_add_end(begin, ft_lst_new(ft_atoi(str[i++])));
	ft_check_double(begin, f);
}
