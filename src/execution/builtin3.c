/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:33:36 by rzarquon          #+#    #+#             */
/*   Updated: 2022/09/12 19:37:38 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	not_valid_handler(char *a, char *b)
{
	g_exit = 1;
	free(a);
	free(b);
	write(STDERR_FILENO, "minishell: export: not valid\n", 30);
}

int	builtin_handler1(char *pwdcopy, char *pathcopy)
{
	free(pathcopy);
	free(pwdcopy);
	return (ft_error(-1, "minishell: cd: malloc", 1, 0));
}
