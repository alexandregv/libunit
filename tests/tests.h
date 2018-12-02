/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 11:19:39 by aguiot--          #+#    #+#             */
/*   Updated: 2018/12/02 20:05:28 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include "../framework/includes/libunit.h"

int		launcher(void);
int		success_test(void);
int		failure_test(void);
int		segv_test(void);
int		bus_test(void);
int		timeout_test(void);

#endif
