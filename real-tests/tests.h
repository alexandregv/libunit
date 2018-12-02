/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 11:19:39 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 20:46:05 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "../framework/includes/libunit.h"
# include "libft/libft.h"

int		strlen_launcher(void);
int		strlen_basic_test(void);
int		strlen_onechar_test(void);
int		strlen_null_test(void);

int		atoi_launcher(void);
int		atoi_basic_test_a(void);
int		atoi_basic_test_b(void);
int		atoi_basic_test_c(void);
int		atoi_basic_test_d(void);
int		atoi_basic_test_e(void);
int		atoi_basic_test_f(void);
int		atoi_hardone_a(void);
int		atoi_hardone_b(void);

int		isupper_launcher(void);
int		isupper_up_test(void);
int		isupper_down_test(void);
int		isupper_int_test(void);

int		tolower_launcher(void);
int		tolower_up_test(void);
int		tolower_down_test(void);
int		tolower_int_test(void);

int		memset_launcher(void);
int		memset_basic_test(void);
int		memset_onebyte_test(void);

int		strchr_launcher(void);
int		strchr_basic_test(void);
int		strchr_empty_test(void);

int		strdup_launcher(void);
int		strdup_basic_test(void);
int		strdup_empty_test(void);

int		strstr_launcher(void);
int		strstr_basic_test(void);
int		strstr_empty_needle_test(void);
int		strstr_empty_stack_test(void);
int		strstr_empty_both_test(void);

int		putchar_launcher(void);
int		putchar_basic_test(void);

#endif
