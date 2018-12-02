/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_skip_to.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:13:36 by aguiot--          #+#    #+#             */
/*   Updated: 2018/11/19 17:47:32 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_skip_to(char **str, char const c)
{
	char	*s;

	s = *str;
	while (*str && **str && **str != c)
		++(*str);
	return (*str - s);
}
