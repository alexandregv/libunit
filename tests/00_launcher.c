/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:40:15 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 20:36:45 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		launcher(void)
{
	t_unit_test	*test_list;

	ft_print_test_suite_name("TEST");
	test_list = 0;
	load_test(&test_list, "Success test", &success_test);
	load_test(&test_list, "Fail test", &failure_test);
	load_test(&test_list, "Seg Fault test", &segv_test);
	load_test(&test_list, "Bus Error test", &bus_test);
	load_test(&test_list, "Test timeout", &timeout_test);
	load_test(&test_list, "FPE test", &fpe_test);
	return (launch_test(&test_list));
}
