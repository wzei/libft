
NAME=libft.a

SRC_DIR=srcs

INC_DIR=includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c *.c -I$(INC_DIR)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
