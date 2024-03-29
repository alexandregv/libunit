/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:16:26 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 20:56:26 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int		display_sig(int ret)
{
	if (WIFEXITED(ret))
	{
		if (WEXITSTATUS(ret) == EXIT_SUCCESS)
			ft_print_test_result("OK", 0);
		else
			ft_print_test_result("KO", 1);
		return ((WEXITSTATUS(ret) == EXIT_SUCCESS) ? 0 : -1);
	}
	else if (WIFSIGNALED(ret))
	{
		if (WTERMSIG(ret) == SIGBUS)
			ft_print_test_result("Bus Error", 1);
		else if (WTERMSIG(ret) == SIGSEGV)
			ft_print_test_result("Seg Fault", 1);
		else if (WTERMSIG(ret) == SIGQUIT)
			ft_print_test_result("Quitted", 1);
		else if (WTERMSIG(ret) == SIGFPE)
			ft_print_test_result("Floating Point Exception", 1);
		else if (WTERMSIG(ret) == SIGALRM)
			ft_print_test_result("Timed out", 1);
		else if (WTERMSIG(ret) == SIGABRT)
			ft_print_test_result("Aborted", 1);
	}
	return (-1);
}

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
		return (display_sig(ret));
	}
	else if (pid == 0)
	{
		alarm(10);
		ret = test_struct->func_ptr();
		test_struct = ft_get_first(test_struct);
		ft_free_list(test_struct);
		exit(ret);
	}
	return (-1);
}

int				launch_test(t_unit_test **test_list_ptr)
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
	return (passed_tests == total_tests) ? 0 : -1;
}
