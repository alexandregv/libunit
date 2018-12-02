/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:44:49 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 15:21:41 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test	*ft_get_first(t_unit_test *list_ptr)
{
	while (list_ptr && list_ptr->prev)
		list_ptr = list_ptr->prev;
	return list_ptr;
}

void		ft_free_list(t_unit_test *list_ptr)
{
	t_unit_test		*temp;

	while (list_ptr)
	{
		temp = list_ptr;
		list_ptr = list_ptr->next;
		free(temp);
		temp = 0;
	}
}

void		ft_print_test_suite_name(char *name)
{
	ft_putstr(C_BOLD);
	ft_putstr(C_UNDERLINE);
	ft_putstr(name);
	ft_putstr(C_NONE);
	ft_putstr("\n");
}

void		ft_print_test_name(char *name)
{
	ft_putstr("\t");
	ft_putstr(name);
	ft_putstr("\t>\t");
}

void		ft_print_test_result(char *result, int result_type)
{
	if (result_type == 0)
		ft_putstr(C_GREEN);
	else
		ft_putstr(C_RED);
	ft_putstr(result);
	ft_putstr(C_NONE);
	ft_putstr("\n");
}

void		ft_print_test_suite_result(int passed_tests, int total_tests)
{
	ft_putstr(C_BOLD);
	ft_putstr("\nTotal tests passed:\t");
	ft_putnbr(passed_tests);
	ft_putstr("/");
	ft_putnbr(total_tests);
	ft_putstr("\n");
	ft_putstr(C_NONE);
	ft_putstr("\n_________________________________________________\n\n");
}
