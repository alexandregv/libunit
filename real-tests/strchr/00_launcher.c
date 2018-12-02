/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:13:55 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 17:50:15 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int		strchr_launcher(void)
{
	t_unit_test	*test_list;

	test_list = 0;
	load_test(&test_list, "Basic test", &strchr_basic_test);
	load_test(&test_list, "NULL test", &strchr_empty_test);
	return (launch_test(&test_list));
}
