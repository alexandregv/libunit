/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:25:53 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 18:06:22 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdlib.h>
#include <string.h>

int			memset_basic_test(void)
{
	char	*mem1;
	char	*mem2;
	int		ret;

	ret = -1;
	if ((mem1 = (void*)malloc(5)) == 0)
		return (-1);
	if ((mem2 = (void*)malloc(5)) == 0)
		return (-1);
	mem1 = ft_memset(mem1, 'Z', (size_t)5);
	mem2 = memset(mem2, 'Z', (size_t)5);
	if (memcmp(mem1, mem2, 5) == 0)
		ret = 0;
	free(mem1);
	free(mem2);
	mem1 = NULL;
	mem2 = NULL;
	return (ret);
}
