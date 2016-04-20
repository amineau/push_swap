/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 15:25:16 by amineau           #+#    #+#             */
/*   Updated: 2016/04/21 00:29:32 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(int er, int flag)
{
	char	*str;

	if (flag == 1)
	{
		if (er == 2)
			str = "arguments not decimals";
		if (er == 3)
			str = "one or more values are larger size of int";
		if (er == 4)
			str = "one or more twins";
		ft_putendl_fd("--------------------------", 2);
		ft_putendl_fd(str, 2);
		ft_putendl_fd("--------------------------", 2);
	}
	else
		ft_putendl_fd("Error", 2);
	exit(1);
}

void	ft_check_error(char **str, t_flag *f)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i][0] == '-' && !str[i][1])
			ft_exit(2, f->e);
		while (str[i][j])
		{
			if (j == 0 && str[i][j] != '-' && !ft_isdigit(str[i][j]))
				ft_exit(2, f->e);
			else if (j != 0 && !ft_isdigit(str[i][j]))
				ft_exit(2, f->e);
			j++;
		}
		if (ft_atol(str[i]) > INT_MAX || ft_atol(str[i]) < -INT_MAX - 1)
			ft_exit(3, f->e);
		i++;
	}
}

void	ft_check_double(t_pile **lst, t_flag *f)
{
	t_pile	*tmp;
	t_pile	*tmp2;

	tmp = *lst;
	while (tmp->next)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->nb == tmp2->nb)
				ft_exit(4, f->e);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}
