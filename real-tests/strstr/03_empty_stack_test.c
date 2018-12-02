/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty_stack_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:51:54 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 17:44:03 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <string.h>

int			strstr_empty_stack_test(void)
{
	char	*stack;
	char	*needle;

	stack = "";
	needle = "test";
	if (ft_strstr(stack, needle) == strstr(stack, needle))
		return (0);
	else
		return (-1);
}
