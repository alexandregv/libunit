/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:03:44 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 12:12:59 by pclement         ###   ########.fr       */
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
		struct s_unit_test *prev;
} t_unit_test;

void	load_test(t_unit_test **test_list_ptr, char *test_name, int(*test_func_ptr)(void));
int		launch_test(t_unit_test **test_list_ptr);
void	ft_free_list(t_unit_test *list_ptr);
t_unit_test	*ft_get_first(t_unit_test *list_ptr);


//A enlever
size_t	ft_strlen(char *str);
void	ft_putnbr(int n);
int		basic_test(void);
#include <stdio.h>

#endif

