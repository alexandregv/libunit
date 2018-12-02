/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_empty_both_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:52:32 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 17:41:15 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <string.h>

int			strstr_empty_both_test(void)
{
	char	*stack;
	char	*needle;

	stack = "";
	needle = "";
	if (ft_strstr(stack, needle) == strstr(stack, needle))
		return (0);
	else
		return (-1);
}
