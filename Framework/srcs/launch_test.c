/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:16:26 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 15:24:13 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libunit.h"
# include <stdio.h>
# include <signal.h>

static int		ft_test_function(t_unit_test *test_struct)
{
	pid_t	pid;
	int		ret;

	ret = 0;
	pid = fork();
	if (pid < 0)
	{
		write(1, "Fork problem\n", 13);
		exit(-1);
	}
	if (pid > 0)
	{
		wait(&ret);
		if (WIFEXITED(ret))
		{
			if (WEXITSTATUS(ret) == EXIT_SUCCESS) // ou '== 0'
			{
				ft_print_test_result("OK", 0);
				return (0);
			}
			else
			{
				ft_print_test_result("KO", 1);
				return (-1);
			}
		}
		else if (WIFSIGNALED(ret))
		{
			// faire un tableau qui regroupe tous les SIG ?
			if (WTERMSIG(ret) == SIGBUS)
				ft_print_test_result("Bus Error", 1);
			else if (WTERMSIG(ret) == SIGSEGV)
				ft_print_test_result("Seg Fault", 1);
		}
		return (-1);
	}
	else if (pid == 0)
	{
		ret = test_struct->func_ptr();
		test_struct = ft_get_first(test_struct);
		ft_free_list(test_struct);
		exit(ret);
	}
	return (-1);
}

int		launch_test(t_unit_test **test_list_ptr)
{
	t_unit_test		*temp;
	int				passed_tests;
	int				total_tests;

	temp = *test_list_ptr;
	while (temp && temp->next)
		temp = temp->next;
	passed_tests = 0;
	total_tests = 0;
	while (temp)
	{
		ft_print_test_name(temp->name);
		total_tests++;
		if (ft_test_function(temp) == 0)
			passed_tests += 1;
		temp = temp->prev;
	}
	ft_print_test_suite_result(passed_tests, total_tests);
	ft_free_list(*test_list_ptr);
	if (passed_tests == total_tests)
		return (0);
	else
		return (-1);
}
