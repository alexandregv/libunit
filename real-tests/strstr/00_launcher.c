/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:47:49 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 18:04:16 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int		strstr_launcher(void)
{
	t_unit_test	*test_list;

	ft_print_test_suite_name("STRSTR");
	test_list = 0;
	load_test(&test_list, "Basic test", &strstr_basic_test);
	load_test(&test_list, "No needle test", &strstr_empty_needle_test);
	load_test(&test_list, "No stack test", &strstr_empty_stack_test);
	load_test(&test_list, "No both test", &strstr_empty_both_test);
	return (launch_test(&test_list));
}
