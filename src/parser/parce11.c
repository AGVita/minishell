/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parce11.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:35:15 by rzarquon          #+#    #+#             */
/*   Updated: 2022/09/12 19:35:17 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	prs_only_empty_var(t_llist *str, char **word, t_expi *ei)
{
	t_ll_elem	*h;

	if (ei->size == 0)
	{
		h = str->head;
		while (h)
		{
			if ((long)h->key != LX_WORD)
				return ;
			h = h->next;
		}
		free(*word);
		*word = NULL;
	}
}
