/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_onebyte_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:02:22 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 16:03:26 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"
# include <stdlib.h>
# include <string.h>

int			memset_onebyte_test(void)
{
	char	*mem1;
	char	*mem2;
	
	if (((mem1 = (void*)malloc(1)) == 0) || ((mem2 = (void*)malloc(1)) == 0))
		return (-1);
	mem1 = ft_memset(mem1, 'Z', (size_t)1);
	mem2 = memset(mem2, 'Z', (size_t)1);
	if (memcmp(mem1, mem2, 1) == 0)
	{
		free(mem1);
		free(mem2);
		mem1 = NULL;
		mem2 = NULL;
		return (0);
	}
	else
		return (-1);
}
