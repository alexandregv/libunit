/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:48:33 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 16:53:29 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"
# include <string.h>

int			strstr_basic_test(void)
{
	char	*stack;
	char	*needle;

	stack = "libunit test";
	needle = "test";	
	if (ft_strstr(stack, needle) == strstr(stack, needle))
		return (0);
	else
		return (-1);
}
