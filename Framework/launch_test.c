/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:16:26 by pclement          #+#    #+#             */
/*   Updated: 2018/12/01 15:01:38 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libunit.h"
# include <stdio.h>

static int		ft_test_function(t_unit_test *test_struct)
{
	pid_t	pid;
	int		*ret;

	*ret = -1;
	pid = fork();
	if (pid < 0)
	{
		write(1, "Fork problem\n", 13);
		exit(-1);
	}
	if (pid == 0)
	{
		*ret = test_struct->func_ptr();
		puts("\t> ");
		puts(test_struct->name);
		if (*ret == 0)
			puts(" : [OK]\n");
		else
			puts(" : [FAIL]\n");
		// exit ?? + avoir tous les cas de fail changer puts et enlever stdio
	}
	else
	{
		if (wait(0) == -1)
			write(1, "Crash\n", 6);
	}
	return (*ret);
	// attention return Child ou va t il ?
}

int		launch_test(t_unit_test **test_list_ptr)
{
	t_unit_test		*temp;
	int				passed_tests;

	temp = *test_list_ptr;
	passed_tests = 0;
	while (temp)
	{
		if (ft_test_function(temp) == 0)
			passed_tests += 1;
		temp = temp->next;
	}
	return passed_tests;
}
