/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_down_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:16:30 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 15:16:31 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"
# include <ctype.h>

int		isupper_down_test(void)
{
	if (ft_isupper('a') == isupper('a'))
		return (0);
	else
		return (-1);
}
