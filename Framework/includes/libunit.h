/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:03:44 by pclement          #+#    #+#             */
/*   Updated: 2018/12/02 15:26:03 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
# define C_NONE         "\033[0m"
# define C_RED          "\033[31m"
# define C_GREEN        "\033[32m"
# define C_UNDERLINE    "\033[4m"
# define C_BOLD         "\033[1m"

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
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
void		ft_print_test_name(char *name);
void		ft_print_test_suite_name(char *name);
void		ft_print_test_result(char *result, int result_type);
void		ft_print_test_suite_result(int passed_tests, int total_tests);


#endif

