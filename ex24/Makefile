CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes
SRCS_FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(SRCS_FILES:%.c=%.o)
NAME = libft.a
VPATH = srcs

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $@ $^ 

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
