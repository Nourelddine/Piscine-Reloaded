NAME = ft_display_file
CC = gcc

FLAGS = -Werror -Wextra -Wall

all : $(NAME)

$(NAME) :
	$(CC)  -c $(NAME).c
	$(CC) $(FLAGS) $(NAME).o -o $(NAME)

clean :
	rm -rf $(NAME).o
	
fclean: clean
	rm -rf  $(NAME)