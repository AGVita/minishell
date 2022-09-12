/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:35:55 by rzarquon          #+#    #+#             */
/*   Updated: 2022/09/12 19:35:57 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	llist_int_kcmp(const void *k1, const void *k2)
{
	if ((long)k1 == (long)k2)
		return (0);
	if ((long)k1 < (long)k2)
		return (-1);
	return (1);
}

int	llist_str_kcmp(const void *k1, const void *k2)
{
	return (ft_strcmp((const char *)k1, (const char *)k2));
}

void	llist_free_wrapper(void *llist)
{
	llist_free((t_llist *)llist);
}
