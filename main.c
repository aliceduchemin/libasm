#include <stdio.h>
#include <string.h>
extern size_t	ft_strlen(const char *s);
extern int	ft_strcmp(const char *s1, const char *s2);

int	main()
{
	printf("---STRLEN---\n");
	printf("%zu %zu\n", ft_strlen(""), strlen(""));
	printf("%zu %zu\n", ft_strlen("tototototo"), strlen("tototototo"));
	printf("---STRCMP---\n");
	printf("%d %d\n", ft_strcmp("", ""), strcmp("", ""));
	printf("%d %d\n", ft_strcmp("aaa", ""), strcmp("aaa", ""));
	printf("%d %d\n", ft_strcmp("", "a"), strcmp("", "a"));
	printf("%d %d\n", ft_strcmp("aa", "b"), strcmp("aa", "b"));
	printf("%d %d\n", ft_strcmp("a", "b"), strcmp("a", "b"));
	printf("%d %d\n", ft_strcmp("b", "aa"), strcmp("b", "aa"));
	return (0);
}
