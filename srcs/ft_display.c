/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 17:05:10 by amineau           #+#    #+#             */
/*   Updated: 2016/03/25 17:27:15 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_cnt_word(const char *s)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == ' ') && s[i] != ' ')
			cnt++;
		i++;
	}
	return (cnt);
}

void	ft_display(t_pile **a, t_pile **b, t_flag *f)
{
	t_pile	*tmp;

	if (f->v == 1)
	{
		tmp = *a;
		ft_printf("\n*******************************\na : ");
		while (tmp)
		{
			ft_printf("%d", tmp->nb);
			if (tmp->next)
				ft_printf(" ");
			tmp = tmp->next;
		}
		ft_printf("\n");
		tmp = *b;
		ft_printf("b : ");
		while (tmp)
		{
			ft_printf("%d", tmp->nb);
			if (tmp->next)
				ft_printf(" ");
			tmp = tmp->next;
		}
		ft_printf("\n%s\nNumber of operation : %d\n*******************************\n", f->ret, ft_cnt_word(f->ret));
	}
}
