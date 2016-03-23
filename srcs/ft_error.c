/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 15:25:16 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 10:47:46 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(int a)
{
	char	*str;

	if (a == 1)
		str = "arguments missing";
	if (a == 2)
		str = "arguments not decimals";
	if (a == 3)
		str = "one or more values are larger size of int";
	ft_printf("%s\n",str);
	exit(1);
}

void	ft_check_error(int ac, char **str)
{
	int	i;
	int j;

	if (ac == 1)
		ft_exit(1);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
				ft_exit(2);
			j++;
		}
		if (ft_atol(str[i]) > INT_MAX || ft_atol(str[i]) < -INT_MAX - 1)
			ft_exit(3);
		i++;
	}
}
