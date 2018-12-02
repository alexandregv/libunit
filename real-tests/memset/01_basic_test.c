/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:25:53 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 15:33:38 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"
# include <stdlib.h>
# include <string.h>

int			memset_basic_test(void)
{
	char	*str;
	
	if ((str = (char*)malloc(sizeof(char) * 5)) == NULL)
		return (-1);
	if (ft_memset(str, '\0', (size_t)5) == ft_memset(str, '\0', (size_t)5))
	{
		free(str);
		str = NULL;
		return (0);
	}
	else
		return (-1);
}
