/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:40:15 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 17:39:34 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"

int		isupper_launcher(void)
{
	t_unit_test	*test_list;

	ft_print_test_suite_name("ISUPPER");
	test_list = 0;
	load_test(&test_list, "Basic test UP", &isupper_up_test);
	load_test(&test_list, "Basic test DOWN", &isupper_down_test);
	load_test(&test_list, "Int test", &isupper_int_test);
	return(launch_test(&test_list));
}

