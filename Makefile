SRCS		= ft_strlen.s ft_strcmp.s ft_strcpy.s ft_write.s ft_read.s ft_strdup.s

OBJS		= $(SRCS:.s=.o)

TESTS_DIR	= ./test

NAME		= libasm.a

NASM		= nasm -f elf64

%.o:%.s
			$(NASM) $< -o $@

RM			= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

test:		$(NAME)
			clang -I .libasm.h -I $(TESTS_DIR) $(TESTS_DIR)/*.c -L. -lasm
			./a.out
		
clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME) a.out

re:			fclean all

.PHONY:		all clean fclean re test
