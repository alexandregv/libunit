/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:03:54 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 14:06:53 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"
# include <string.h>

int		strlen_basic_test(void)
{
	if (ft_strlen("Hello") == ft_strlen("Hello"))
		return (0);
	else
		return (-1);
}
