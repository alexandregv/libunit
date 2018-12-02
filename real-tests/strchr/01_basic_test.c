/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:14:25 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 16:38:47 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"
# include <string.h>

int			strchr_basic_test(void)
{
	char	*str;

	str = "test";
	if (ft_strchr(str, 'e') == strchr(str, 'e'))
		return (0);
	else
		return (-1);
}
