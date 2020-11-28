/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduchemi <aduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:07:33 by aduchemi          #+#    #+#             */
/*   Updated: 2020/11/28 12:00:00 by aduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm_tests.h"

void	ft_test_read(void)
{
	int		fd1;
	int		fd2;
	char	buf1[50];
	char	buf2[50];

	fd1 = open("Makefile", O_RDONLY);
	printf("\n---READ---\n");
	errno = 0;
	printf("%zd\t |%s| errno=%d\n", ft_read(fd1, buf1, 49), buf1, errno);
	close(fd1);
	fd2 = open("Makefile", O_RDONLY);
	errno = 0;
	printf("%zd\t |%s| errno=%d\n", read(fd2, buf2, 49), buf2, errno);
	close(fd2);
}

void	ft_test_strdup(void)
{
	char	s1[3];
	char	s2[39];
	char	*save1;
	char	*save2;

	strcpy(s1, "");
	strcpy(s2, "lol;h,gfcghjklkljknhjbgvctrfvbgytgubhn,");
	printf("\n---STRDUP---\n");
	errno = 0;
	save1 = ft_strdup(s1);
	printf("%s\terrno=%d\n", save1, errno);
	save2 = strdup(s1);
	printf("%s\terrno=%d\n", save2, errno);
	free(save1);
	free(save2);
	errno = 0;
	save1 = ft_strdup(s2);
	printf("%s\terrno=%d\n", save1, errno);
	save2 = strdup(s2);
	printf("%s\terrno=%d\n", save2, errno);
	free(save1);
	free(save2);
}
