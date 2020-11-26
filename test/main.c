/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduchemi <aduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:07:33 by aduchemi          #+#    #+#             */
/*   Updated: 2020/11/23 19:16:08 by aduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm_tests.h"

int		main(void)
{
	ft_test_strlen();
	ft_test_strcmp();
	ft_test_strcpy();
	ft_test_write();
	ft_test_read();
	ft_test_strdup();
	return (0);
}

void	ft_test_strlen(void)
{
	printf("\n---STRLEN---\n");
	printf("%zu\t%zu\n", ft_strlen(""), strlen(""));
	printf("%zu\t%zu\n", ft_strlen("tototototo"), strlen("tototototo"));
}

void	ft_test_strcmp(void)
{
	printf("\n---STRCMP---\n");
	printf("%d\t%d\n", ft_strcmp("", ""), strcmp("", ""));
	printf("%d\t%d\n", ft_strcmp("aaa", ""), strcmp("aaa", ""));
	printf("%d\t%d\n", ft_strcmp("", "a"), strcmp("", "a"));
	printf("%d\t%d\n", ft_strcmp("aa", "b"), strcmp("aa", "b"));
	printf("%d\t%d\n", ft_strcmp("a", "b"), strcmp("a", "b"));
	printf("%d\t%d\n", ft_strcmp("b", "aa"), strcmp("b", "aa"));
}

void	ft_test_strcpy(void)
{
	char	dest1[5];
	char	dest2[5];

	printf("\n---STRCPY---\n");
	printf("|%s| ", ft_strcpy(dest1, "loli"));
	printf("|%s|\n", strcpy(dest2, "loli"));
	printf("len1=%zu len2=%zu\n", strlen(dest1), strlen(dest2));
}

void	ft_test_write(void)
{
	printf("\n---WRITE---\n");
	errno = 0;
	printf("ret=%zd errno=%d\n", ft_write(1, "a\t", 2), errno);
	printf("ret=%zd errno=%d\n", write(1, "a\t", 2), errno);
	errno = 0;
	printf("ret=%zd errno=%d\n", ft_write(1, "lolilol\t", 8), errno);
	printf("ret=%zd errno=%d\n", write(1, "lolilol\t", 8), errno);
	errno = 0;
	printf("ret=%zd errno=%d\n", ft_write(1, "", 0), errno);
	printf("ret=%zd errno=%d\n", write(1, "", 0), errno);
}
