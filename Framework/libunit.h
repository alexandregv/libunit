/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:03:44 by pclement          #+#    #+#             */
/*   Updated: 2018/12/01 14:41:43 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>


typedef struct s_unit_test
{
		char *name;
		int (*func_ptr)(void);
		char result;
		char *error_type;
		struct s_unit_test *next;
} t_unit_test;

void	load_test(t_unit_test **test_list_ptr, char *test_name, int(*test_func_ptr)(void));
int		launch_test(t_unit_test **test_list_ptr);

#endif
