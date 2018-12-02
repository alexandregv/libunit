/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_onebyte_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:34:28 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 15:35:32 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"
# include <stdlib.h>
# include <string.h>

int			memset_onebyte_test(void)
{
	char	*str;
	
	if ((str = (char*)malloc(sizeof(char) * 1)) == NULL)
		return (-1);
	if (ft_memset(str, '\0', (size_t)1) == ft_memset(str, '\0', (size_t)1))
	{
		free(str);
		str = NULL;
		return (0);
	}
	else
		return (-1);
}
