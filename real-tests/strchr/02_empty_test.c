/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:16:03 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 16:38:51 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"
# include <string.h>

int			strchr_empty_test(void)
{
	char	*str;

	str = "";
	if (ft_strchr(str, 'e') == strchr(str, 'r'))
		return (0);
	else
		return (-1);
}
