/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 11:35:15 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 11:36:09 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "tests.h"

int			bus_test(void)
{
	char	*str;

	str = "42";
	if ((str[0] = '1'))
		return (0);
	else
		return (-1);
}