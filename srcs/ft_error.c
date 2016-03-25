/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 15:25:16 by amineau           #+#    #+#             */
/*   Updated: 2016/03/24 17:05:02 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(int er, int flag)
{
	char	*str;

	if (flag == 1)
	{
		if (er == 1)
			str = "arguments missing";
		if (er == 2)
			str = "arguments not decimals";
		if (er == 3)
			str = "one or more values are larger size of int";
		if (er == 4)
			str = "one or more twins";
		ft_printf("--------------------------\n%s\n--------------------------\n",str);
	}
	else
		ft_printf("Error\n");
	exit(1);
}

void	ft_check_error(int ac, char **str, t_flag *f)
{
	int	i;
	int	j;

	if (ac == 1)
		ft_exit(1, f->e);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]) && str[i][j] != '-')
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
