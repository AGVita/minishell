/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:36:06 by rzarquon          #+#    #+#             */
/*   Updated: 2022/09/12 19:36:08 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_destroy(t_info *info)
{
	ft_free_char2dem(info->envp, -1);
	free(info->g_exit_str);
	llist_free(info->envp_list);
	rl_clear_history();
	return (0);
}

t_group	*ft_group_new(int type)
{
	t_group		*g;

	g = (t_group *)malloc(sizeof(t_group));
	if (!g)
		return (NULL);
	g->type = type;
	g->cmds = llist_new(NULL, llist_free_wrapper, free);
	g->files = llist_new(NULL, NULL, free);
	if (NULL == g->cmds || NULL == g->files)
	{
		if (g->cmds)
			llist_free(g->cmds);
		if (g->files)
			llist_free(g->files);
		free(g);
		return (NULL);
	}
	return (g);
}

void	ft_group_free(void *group)
{
	t_ll_elem	*ptr;

	ptr = ((t_group *)group)->files->head;
	while (ptr)
	{
		unlink(ptr->val);
		ptr = ptr->next;
	}
	llist_free(((t_group *)group)->cmds);
	llist_free(((t_group *)group)->files);
	free(group);
}
