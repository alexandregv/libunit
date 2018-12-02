/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:44:49 by pclement          #+#    #+#             */
/*   Updated: 2018/12/01 18:51:42 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	ft_free_list(t_unit_test *list_ptr)
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
