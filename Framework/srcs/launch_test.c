/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:16:26 by pclement          #+#    #+#             */
/*   Updated: 2018/12/01 19:31:03 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libunit.h"
# include <stdio.h>
# include <signal.h>

static int		ft_test_function(t_unit_test *test_struct)
{
	pid_t	pid;
	int		ret;

	ret = 42;
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
				puts("test SUCCESS");
				ft_putnbr(WEXITSTATUS(ret));
				return (0);
			}
			else
			{
				puts("test FAIL");
				ft_putnbr(WEXITSTATUS(ret));
				return (-1);
			}
		}
		else if (WIFSIGNALED(ret))
		{
			// faire un tableau qui regroupe tous les SIG ?
			puts("test crashed");
			if (WTERMSIG(ret) == SIGBUS)
				puts("BUS ERROR");
			else if (WTERMSIG(ret) == SIGSEGV)
				puts("SEG FAULT");
			ft_putnbr(WTERMSIG(ret));
		}
		else if (WIFSTOPPED(ret))
		{
			puts("test stopped by a SIG");
			ft_putnbr(WSTOPSIG(ret));
		}
		return (-1);
	}
	else if (pid == 0)
	{
		ret = test_struct->func_ptr();
		//ft_free_list(*test_list_ptr);
		exit(ret);
	}
	return (-1);
}

int		launch_test(t_unit_test **test_list_ptr)
{
	t_unit_test		*temp;
	int				passed_tests;

	temp = *test_list_ptr;
	while (temp && temp->next)
		temp = temp->next;
	passed_tests = 0;
	while (temp)
	{
		//a enlever 
		puts(temp->name);
		if (ft_test_function(temp) == 0)
			passed_tests += 1;
		temp = temp->prev;
	}
	ft_free_list(*test_list_ptr);
	return passed_tests;
}
