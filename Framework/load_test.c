/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:17:25 by pclement          #+#    #+#             */
/*   Updated: 2018/12/01 12:42:29 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"


void	load_test(t_unit_test **test_list_ptr, char *test_name, int(*test_func_ptr)(void))
{
	t_unit_test *new;

	if ((t_unit_test *)malloc(sizeof(t_unit_test)) == 0)
		return ;
	new->name = test_name;
	new->func_ptr = test_func_ptr;
	new->result = 0;
	new->error_type = 0;
	new->next = *test_list_ptr;
	*test_list_ptr = new;
}
