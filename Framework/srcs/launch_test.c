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
		ft_putnbr(ret);
		wait(&ret);
		puts("\ndans pid diff 0");
		puts("test");
		ft_putnbr(ret);
		puts("test");
	}
	else if (pid == 0)
	{
		puts("dans pid = 0");
		ret = test_struct->func_ptr();
		ft_putnbr(ret);
		//ft_free_list(*test_list_ptr);
		exit(ret);
	}
	return (ret);
	// attention return Child ou va t il ?
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
