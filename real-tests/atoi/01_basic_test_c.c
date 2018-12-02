/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:03:54 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 16:37:39 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"
# include <stdlib.h>

int		atoi_basic_test_c(void)
{
	char *str;

	str = "ab+123";
	if (ft_atoi(str) == atoi(str))
		return (0);
	else
		return (-1);
}
