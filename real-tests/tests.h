/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 11:19:39 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 14:48:40 by aguiot--         ###   ########.fr       */
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
int		isupper_basic_test(void);
int		isupper_int_test(void);

#endif
