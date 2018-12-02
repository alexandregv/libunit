/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:03:54 by pclement          #+#    #+#             */
/*   Updated: 2018/12/01 19:06:10 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../Framework/includes/libunit.h"
# include <string.h>

int		basic_test(void)
{
	if (strlen("Hello1") == ft_strlen("Hello"))
		return (0);
	else
		return (-1);
}
