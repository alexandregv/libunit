/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:03:54 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 17:58:13 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdlib.h>

int		atoi_basic_test_d(void)
{
	char *str;

	str = "     -+ \34";
	if (ft_atoi(str) == atoi(str))
		return (0);
	else
		return (-1);
}
