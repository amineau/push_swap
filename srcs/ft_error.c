/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 15:25:16 by amineau           #+#    #+#             */
/*   Updated: 2016/03/22 16:13:08 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(int a)
{
	char	*str;

	if (a == 1)
		str = "arguments missing";
	if (a == 2)
		str = "arguments error";
	ft_printf("%s\n",str);
	exit(1);
}

void	ft_check_error(int ac, char **str)
{
	if (ac == 1)
		ft_exit(1);
	while (*str)
	{
		while (**str)
		{
			if (!ft_isdigit(**str))
				ft_exit(2);
			(*str)++;
		}
		str++;
	}
}
