/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retour.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amineau <amineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/23 13:41:42 by amineau           #+#    #+#             */
/*   Updated: 2016/03/23 16:52:06 by amineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_retour(char **ret, char *ope, char pile)
{
	if (ret)
	{
		if (*ret)
			*ret = ft_strclnjoin(ft_straddc(*ret, ' '),
					ft_straddc(ft_strdup(ope), pile));
		else
			*ret = ft_straddc(ft_strdup(ope), pile);
	}
}
