/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:58:28 by pclement          #+#    #+#             */
/*   Updated: 2017/11/15 19:09:44 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	result;
	char	c;

	result = (long)(n);
	if (result < 0)
	{
		write(1, "-", 1);
		result = -result;
	}
	if (result / 10 > 0)
		ft_putnbr(result / 10);
	c = result % 10 + 48;
	write(1, &c, 1);
}
