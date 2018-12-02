/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 11:19:39 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 17:07:29 by pclement         ###   ########.fr       */
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

// atoi
int		atoi_launcher(void);
int		atoi_basic_test_a(void);
int		atoi_basic_test_b(void);
int		atoi_basic_test_c(void);
int		atoi_basic_test_d(void);
int		atoi_basic_test_e(void);
int		atoi_basic_test_f(void);
int		atoi_hardone_a(void);
int		atoi_hardone_b(void);

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

#endif
