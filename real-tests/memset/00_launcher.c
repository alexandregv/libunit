/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:21:34 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 18:06:29 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int		memset_launcher(void)
{
	t_unit_test	*test_list;

	ft_print_test_suite_name("MEMSET");
	test_list = 0;
	load_test(&test_list, "Basic test", &memset_basic_test);
	load_test(&test_list, "One-byte test", &memset_onebyte_test);
	return (launch_test(&test_list));
}
