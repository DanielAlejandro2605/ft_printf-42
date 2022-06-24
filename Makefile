NAME 		= libftprintf.a

SRCS 		= ft_printf.c ft_print_unsigned.c ft_print_ptr.c ft_simple_utils.c

OBJS 		= ${SRCS:.c=.o}

CC			= gcc

RM			= rm -f

CFLAGS 		= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -I includes/ -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
