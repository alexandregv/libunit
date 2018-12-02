/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 20:43:41 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 20:53:36 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	putchar_basic_test(void)
{
	char	buff[2];
	int		filedes[2];
	int		catched_out;

	buff[0] = 0;
	buff[1] = 1;
	catched_out = dup(1);
	pipe(filedes);
	dup2(filedes[1], 1);
	ft_putchar('z');
	read(filedes[0], &buff[0], 1);
	write(1, "z", 1);
	read(filedes[0], &buff[1], 1);
	dup2(1, catched_out);
	if (buff[0] == buff[1])
		return (0);
	else
		return (-1);
}
