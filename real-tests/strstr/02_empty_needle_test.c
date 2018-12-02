/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty_needle_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:51:22 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 16:53:22 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"
# include <string.h>

int			strstr_empty_needle_test(void)
{
	char	*stack;
	char	*needle;

	stack = "libunit test";
	needle = "";	
	if (ft_strstr(stack, needle) == strstr(stack, needle))
		return (0);
	else
		return (-1);
}
