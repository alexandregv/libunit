/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:10:55 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 18:11:00 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test	*ft_get_first(t_unit_test *list_ptr)
{
	while (list_ptr && list_ptr->prev)
		list_ptr = list_ptr->prev;
	return (list_ptr);
}
