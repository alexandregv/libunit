/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:40:15 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 17:57:04 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int		atoi_launcher(void)
{
	t_unit_test	*test_list;

	ft_print_test_suite_name("ATOI");
	test_list = 0;
	load_test(&test_list, "Basic test a", &atoi_basic_test_a);
	load_test(&test_list, "Basic test b", &atoi_basic_test_b);
	load_test(&test_list, "Basic test c", &atoi_basic_test_c);
	load_test(&test_list, "Basic test d", &atoi_basic_test_d);
	load_test(&test_list, "Basic test e", &atoi_basic_test_e);
	load_test(&test_list, "Basic test f", &atoi_basic_test_f);
	return (launch_test(&test_list));
}
/*
**load_test(&test_list, "Hard one a", &atoi_hardone_a);
**load_test(&test_list, "Hard one b", &atoi_hardone_b);
*/
