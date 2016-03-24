/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 17:52:30 by amineau           #+#    #+#             */
/*   Updated: 2016/03/24 18:09:03 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_initialize_flag(t_flag **f)
{
	(*f)->d = 0;
	(*f)->e = 0;
	(*f)->h = 0;
	(*f)->n = 0;
	(*f)->v = 0;
}

t_flag	*ft_flag(char **str)
{
	t_flag	*f;
	int		i;
	int		j;

	ft_initialize_flag(&f);
	i = 0;
	while (str[i][0] == '-' && !ft_isdigit(str[i][1]))
	{
		j = 1;
		while (str[i][j])
		{
			if (ft_str)
		}
	}
}
