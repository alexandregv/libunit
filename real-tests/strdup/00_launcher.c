/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:37:51 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 18:05:05 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int		strdup_launcher(void)
{
	t_unit_test	*test_list;

	ft_print_test_suite_name("STRDUP");
	test_list = 0;
	load_test(&test_list, "Basic test", &strdup_basic_test);
	load_test(&test_list, "Empty test", &strdup_empty_test);
	return (launch_test(&test_list));
}
