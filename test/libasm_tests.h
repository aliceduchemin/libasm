/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduchemi <aduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:57:59 by aduchemi          #+#    #+#             */
/*   Updated: 2020/11/23 19:05:10 by aduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_TESTS_H
# define LIBASM_TESTS_H

# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <unistd.h>
# include "../libasm.h"

void	ft_test_strlen(void);
void	ft_test_strcpy(void);
void	ft_test_strcmp(void);
void	ft_test_write(void);
void	ft_test_read(void);
void	ft_test_strdup(void);

#endif
