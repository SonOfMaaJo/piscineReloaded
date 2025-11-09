CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_display_file.c
OBJ = ft_display_file.o
NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $< -o $@

$(OBJ) : $(SRC)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

.PHONY: all clean fclean re
