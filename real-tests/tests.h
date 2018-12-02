/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 11:19:39 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 16:47:16 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "../Framework/includes/libunit.h"
# include "libft/libft.h"

// strlen
int		strlen_launcher(void);
int		strlen_basic_test(void);
int		strlen_onechar_test(void);
int		strlen_null_test(void);

// isupper
int		isupper_launcher(void);
int		isupper_up_test(void);
int		isupper_down_test(void);
int		isupper_int_test(void);

// tolower
int		tolower_launcher(void);
int		tolower_up_test(void);
int		tolower_down_test(void);
int		tolower_int_test(void);

// memset
int		memset_launcher(void);
int		memset_basic_test(void);
int		memset_onebyte_test(void);

// strchr
int		strchr_launcher(void);
int		strchr_basic_test(void);
int		strchr_empty_test(void);

// strdup
int		strdup_launcher(void);
int		strdup_basic_test(void);
int		strdup_empty_test(void);

// strstr
int		strstr_launcher(void);
int		strstr_basic_test(void);
int		strstr_empty_needle_test(void);
int		strstr_empty_stack_test(void);
int		strstr_empty_both_test(void);

#endif
