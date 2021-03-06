/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 09:27:29 by amineau           #+#    #+#             */
/*   Updated: 2016/04/21 00:06:13 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define FLAG "nhvecC"
# include "libft.h"
# include <limits.h>

typedef struct	s_flag
{
	int				n;
	int				h;
	int				v;
	int				c;
	int				e;
	int				esc;
	int				total;
	int				argv;
	struct s_flag	*next;
}				t_flag;

typedef struct	s_pile
{
	int				nb;
	struct s_pile	*next;
}				t_pile;

void			ft_check_error(char **str, t_flag *f);
void			ft_check_double(t_pile **lst, t_flag *f);
void			ft_exit(int er, int flag);
t_pile			*ft_lst_new(int nb);
t_flag			*ft_flag(char **str, int ac);
void			ft_retour(char **ret, char *ope);
void			ft_putope(char *str, t_flag *f);
void			ft_lst_add_start(t_pile **begin, t_pile *lst);
void			ft_lst_add_end(t_pile **begin, t_pile *lst);
void			ft_stockage_pile(char **str, t_pile **begin, t_flag *f);

void			ft_swapa(t_pile **a, t_pile **b, t_flag *f);
void			ft_swapb(t_pile **a, t_pile **b, t_flag *f);
void			ft_swap_all(t_pile **a, t_pile **b, t_flag *f);
void			ft_pusha(t_pile **a, t_pile **b, t_flag *f);
void			ft_pushb(t_pile **a, t_pile **b, t_flag *f);
void			ft_rotatea(t_pile **a, t_pile **b, t_flag *f);
void			ft_rotateb(t_pile **a, t_pile **b, t_flag *f);
void			ft_rotate_all(t_pile **a, t_pile **b, t_flag *f);
void			ft_reversea(t_pile **a, t_pile **b, t_flag *f);
void			ft_reverseb(t_pile **a, t_pile **b, t_flag *f);
void			ft_reverse_all(t_pile **a, t_pile **b, t_flag *f);

void			ft_selection_short(t_pile **a, t_pile **b, t_flag *f);
void			ft_selection(t_pile **a, t_pile **b, t_flag *f);
void			ft_sort(t_pile **a, t_pile **b, t_flag *f);
void			ft_sort_by_end(t_pile **a, t_pile **b, t_flag *f);
void			ft_prepa_push(t_pile **a, t_pile **b, t_flag *f, char *cs);
int				ft_length_pile(t_pile **begin);
int				ft_check_sort(t_pile **begin);
int				ft_find_min(t_pile **begin);
int				ft_find_max(t_pile **begin);
int				ft_pos_val(t_pile **begin, int val);
void			ft_display(t_pile **a, t_pile **b, t_flag *f);
void			ft_display_help(void);

#endif
