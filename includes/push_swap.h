/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 09:27:29 by amineau           #+#    #+#             */
/*   Updated: 2016/03/22 17:55:57 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct	s_pile
{
	int				nb;
	struct s_pile	*next;
}				t_pile;

typedef struct	s_flag
{
	char			a;
	char			b;
	char			c;
	char			d;
	char			e;
	struct s_flag	*next;
}				t_flag;

void	ft_check_error(int ac, char **str);
t_pile	ft_lst_new(int nb);
void	ft_lst_add_start(t_pile **begin, t_pile *lst);
void	ft_lst_add_end(t_pile **begin, t_pile *lst);
void	ft_swap(t_pile **begin);
void	ft_swap_all(t_pile **begin);
void	ft_push(t_pile **a, t_pile **b);
void	ft_rotate(t_pile **begin);
void	ft_rotate_all(t_pile **a, t_pile **b);

#endif
