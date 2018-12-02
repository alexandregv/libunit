/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:44:51 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 20:45:19 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int		putchar_launcher(void)
{
	t_unit_test	*test_list;

	ft_print_test_suite_name("PUTCHAR");
	test_list = 0;
	load_test(&test_list, "Basic test", &putchar_basic_test);
	return (launch_test(&test_list));
}
