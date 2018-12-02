/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:40:15 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 18:04:28 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int		strlen_launcher(void)
{
	t_unit_test	*test_list;

	ft_print_test_suite_name("STRLEN");
	test_list = 0;
	load_test(&test_list, "Basic test", &strlen_basic_test);
	load_test(&test_list, "One-char test", &strlen_onechar_test);
	load_test(&test_list, "NULL test", &strlen_null_test);
	return (launch_test(&test_list));
}
