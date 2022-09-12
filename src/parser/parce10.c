/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parce10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:35:10 by rzarquon          #+#    #+#             */
/*   Updated: 2022/09/12 19:35:11 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	prs_group_cmd_ret1(t_cmd_info *info, t_llist *args)
{
	llist_free(args);
	free(info);
	return (1);
}

int	prs_group_cmd_ret2(t_cmd_info *info, t_llist *args)
{
	llist_free(args);
	free(info);
	return (ft_error(1, "minishell: syntax error", 0, 258));
}

int	prs_group_cmd_ret3(t_cmd_info *info, t_llist *args)
{
	llist_free(args);
	free(info);
	return (ft_error(1, "minishell: prs_group_cmd", 1, 0));
}

int	prs_exp_field_ret(t_llist *str)
{
	llist_free(str);
	return (1);
}

int	prs_exp_field_ret2(t_llist *str)
{
	llist_free(str);
	return (0);
}
