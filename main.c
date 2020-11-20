#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
//extern ___error;
extern size_t	ft_strlen(const char *s);
extern int	ft_strcmp(const char *s1, const char *s2);
extern char	*ft_strcpy(char *dest, const char *src);
extern ssize_t	ft_write(int fd, const void *buf, size_t count);
extern ssize_t	ft_read(int fd, const void *buf, size_t count);
extern char *ft_strdup(const char *s);

int	main()
{
	printf("---STRLEN---\n");
	printf("%zu\t%zu\n", ft_strlen(""), strlen(""));
	printf("%zu\t%zu\n", ft_strlen("tototototo"), strlen("tototototo"));
	
	printf("---STRCMP---\n");
	printf("%d\t%d\n", ft_strcmp("", ""), strcmp("", ""));
	printf("%d\t%d\n", ft_strcmp("aaa", ""), strcmp("aaa", ""));
	printf("%d\t%d\n", ft_strcmp("", "a"), strcmp("", "a"));
	printf("%d\t%d\n", ft_strcmp("aa", "b"), strcmp("aa", "b"));
	printf("%d\t%d\n", ft_strcmp("a", "b"), strcmp("a", "b"));
	printf("%d\t%d\n", ft_strcmp("b", "aa"), strcmp("b", "aa"));

	printf("---STRCPY---\n");
	char dest1[5];
	printf("|%s| ", ft_strcpy(dest1, "loli"));
	char dest2[5];
	printf("|%s|\n", strcpy(dest2, "loli"));
	printf("len1=%zu len2=%zu\n", strlen(dest1), strlen(dest2));
	
	printf("---WRITE---\n");
	printf("ret=%zd ret=%zd\n", ft_write(1, "a\t", 2), write(1, "a\t", 2));
	printf("ret=%zd ret=%zd\n", ft_write(1, "lolilol\t", 8), write(1, "lolilol\t", 8));
	printf("ret=%zd ret=%zd\n", ft_write(1, "toto\t", 5), write(1, "toto\t", 5));
	
	printf("---READ---\n");
	int fd1=open("main.c", O_RDONLY);
	int fd2=open("main.c", O_RDONLY);
	char buf1[10];
	printf("%zd\t", ft_read(fd1, buf1, 9));
	printf("|%s|\t", buf1);
	close(fd1);
	char buf2[10];
	printf("%zd\t", read(fd2, buf2, 9));
	close(fd2);
	printf("|%s|\n", buf2);

	printf("---STRDUP---\n");
	char *s1="lol";
	char *s2="lol;h,gfcghjklkljknhjbgvctrfvbgunijnhbvtchytgubhn,";
	char *s3=NULL;
	char *save1;
	char *save2;
	save1 = ft_strdup(s1);
	save2 = strdup(s1);
	printf("%s\t%s\n", save1, save2);
	free(save1);
	free(save2);
	save1 = ft_strdup(s2);
	save2 = strdup(s2);
	printf("%s\t%s\n", save1, save2);
	free(save1);
	free(save2);
//	save1 = ft_strdup(s3);
//	save2 = strdup(s3);
//	printf("%s\t%s\n", save1, save2);
//	printf("%s\n", save2);
	return (0);
}
