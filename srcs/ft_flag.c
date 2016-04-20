/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 17:52:30 by amineau           #+#    #+#             */
/*   Updated: 2016/04/20 23:19:31 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_initialize_flag(t_flag *f)
{
	f->c = 0;
	f->e = 0;
	f->h = 0;
	f->n = 0;
	f->v = 0;
	f->esc = 0;
	f->total = 0;
}

void	ft_check_char(t_flag *f, char c)
{
	if (!ft_strchr(FLAG, c))
		ft_exit(5, 0);
	else if (c == 'c')
		f->c = 1;
	else if (c == 'e')
		f->e = 1;
	else if (c == 'h')
		f->h = 1;
	else if (c == 'n')
		f->n = 1;
	else if (c == 'v')
		f->v = 1;
}

t_flag	*ft_flag(char **str, int ac)
{
	t_flag	*f;
	int		j;
	int		i;

	if (ac == 1)
		ft_exit(1, 0);
	f = (t_flag*)ft_memalloc(sizeof(t_flag));
	ft_initialize_flag(f);
	f->argv = 1;
	i = 0;
	while (str[i] && str[i][0] == '-' && !ft_isdigit(str[i][1]))
	{
		j = 1;
		while (str[i][j])
			ft_check_char(f, str[i][j++]);
		f->argv++;
		i++;
	}
	if (!str[i])
		ft_exit(1, f->e);
	return (f);
}
