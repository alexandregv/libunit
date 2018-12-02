/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:17:25 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 18:07:20 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_unit_test **test_list_ptr, char *test_name
		, int (*test_func_ptr)(void))
{
	t_unit_test *new;

	new = 0;
	if ((new = (t_unit_test *)malloc(sizeof(t_unit_test))) == 0)
		return ;
	new->name = test_name;
	new->func_ptr = test_func_ptr;
	new->result = 0;
	new->error_type = 0;
	new->prev = 0;
	new->next = *test_list_ptr;
	if (new->next)
		new->next->prev = new;
	*test_list_ptr = new;
}
