/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:40:15 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 14:24:12 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "tests.h"

int		strlen_launcher(void)
{
	t_unit_test	*test_list;

	test_list = 0;
	load_test(&test_list, "TEST SUCCESS", &success_test);
	load_test(&test_list, "TEST FAILURE", &failure_test);
	load_test(&test_list, "TEST SEGFAULT", &segv_test);
	load_test(&test_list, "TEST BUSERROR", &bus_test);
	//load_test(&test_list, "Test timeout", &timeout_test);
	return(launch_test(&test_list));
}

