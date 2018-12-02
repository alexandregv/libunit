/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:03:10 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 15:20:33 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"

int		tolower_launcher(void)
{
	t_unit_test	*test_list;

	test_list = 0;
	load_test(&test_list, "Basic test UP", &tolower_up_test);
	load_test(&test_list, "Basic test DOWN", &tolower_down_test);
	load_test(&test_list, "Int test", &tolower_int_test);
	return(launch_test(&test_list));
}

