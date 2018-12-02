/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:44:49 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 14:11:09 by pclement         ###   ########.fr       */
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
