/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_onebyte_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:02:22 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 18:06:02 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdlib.h>
#include <string.h>

int			memset_onebyte_test(void)
{
	char	*mem1;
	char	*mem2;
	int		ret;

	ret = -1;
	if ((mem1 = (void*)malloc(1)) == 0)
		return (-1);
	if ((mem2 = (void*)malloc(1)) == 0)
		return (-1);
	mem1 = ft_memset(mem1, 'Z', (size_t)1);
	mem2 = memset(mem2, 'Z', (size_t)1);
	if (memcmp(mem1, mem2, 1) == 0)
		ret = 0;
	free(mem1);
	free(mem2);
	mem1 = NULL;
	mem2 = NULL;
	return (ret);
}
