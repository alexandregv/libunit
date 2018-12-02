/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:38:22 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 17:55:14 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <string.h>

int			strdup_basic_test(void)
{
	char	*src;
	char	*dst1;
	char	*dst2;

	src = "test";
	dst1 = ft_strdup(src);
	dst2 = strdup(src);
	if (memcmp(dst1, dst2, 5) == 0)
		return (0);
	else
		return (-1);
}
