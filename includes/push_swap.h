/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 09:27:29 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 18:36:52 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include <limits.h>

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
void	ft_check_double(t_pile **lst);
t_pile	*ft_lst_new(int nb);
int		ft_size_pile(t_pile **begin);
void	ft_retour(char **ret, char *ope, char pile);
void	ft_lst_add_start(t_pile **begin, t_pile *lst);
void	ft_lst_add_end(t_pile **begin, t_pile *lst);
int		ft_stockage_pile(char **str, t_pile **begin);
void	ft_swap(t_pile **begin, char c, char **ret);
void	ft_swap_all(t_pile **a, t_pile **b, char **ret);
void	ft_push(t_pile **a, t_pile **b, char c, char **ret);
void	ft_rotate(t_pile **begin, char c, char **ret);
void	ft_rotate_all(t_pile **a, t_pile **b, char **ret);
void	ft_reverse(t_pile **begin, char c, char **ret);
void	ft_reverse_all(t_pile **a, t_pile **b, char **ret);
void	ft_insertion(t_pile **a, t_pile **b, int nbr, char **ret);

#endif
