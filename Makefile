# colors
DEF_COLOR   =   \033[0;39m
GRAY        =   \033[0;90m
RED         =   \033[0;91m
GREEN       =   \033[0;92m
YELLOW      =   \033[0;93m
BLUE        =   \033[0;94m
MAGENTA     =   \033[0;95m
CYAN        =   \033[0;96m
WHITE       =   \033[0;97m

NAME = libft.a

SRC = ft_atoi.c \
		ft_bzero.c  \
		ft_calloc.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_itoa.c\
		ft_strrchr.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_split.c

OBJS = ${SRC:.c=.o}
CC = gcc
CCFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
RM = rm -f 

.c.o:
	${CC} ${CCFLAGS} -c $< -o $@

${NAME} : ${OBJS}
	@echo "esta compilando"
	@ar crs ${NAME} ${OBJS} 
	@echo "$(GREEN)compiló$(DEF_COLOR)"

clean:
	${RM} ${OBJS}

fclean: clean 
	${RM} ${NAME}

re: fclean all

all: ${NAME}

.PHONY: all clean fclean re