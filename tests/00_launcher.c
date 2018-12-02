/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:40:15 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 12:40:07 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "tests.h"

int		strlen_launcher(void)
{
	t_unit_test	*test_list;

	test_list = 0;
	load_test(&test_list, "Test SUCCESS", &success_test);
	load_test(&test_list, "Test FAILURE", &failure_test);
	load_test(&test_list, "Test SEGFAULT", &segv_test);
	load_test(&test_list, "Test BUSERROR", &bus_test);
	//load_test(&test_list, "Test timeout", &timeout_test);
	return(launch_test(&test_list));
}

