/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:40:55 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 16:43:23 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../tests.h"
# include <string.h>

int			strdup_empty_test(void)
{
	char	*src;
	char	*dst1;
	char	*dst2;

	src = "";
	dst1 = ft_strdup(src);
	dst2 = strdup(src);
	if (memcmp(dst1, dst2, 1) == 0)
		return (0);
	else
		return (-1);
}
