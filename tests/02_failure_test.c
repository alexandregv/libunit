/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_failure_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 11:32:50 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 11:34:59 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "tests.h"

int		failure_test(void)
{
	if (1 == 0)
		return (0);
	else
		return (-1);
}
