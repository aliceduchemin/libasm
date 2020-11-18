SRCS		= ft_strlen.s ft_strcmp.s

OBJS		= $(SRCS:.s=.o)

NAME		= libasm.a

NASM		= nasm -f elf64

%.o:%.s
			$(NASM) $< -o $@

RM			= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

test:		$(NAME)
			clang main.c -L. -lasm
		
clean:
			$(RM) $(OBJS) a.out

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
