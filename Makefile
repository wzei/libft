
NAME=libft.a

OBJ= ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
	ft_isprint.o ft_iswhtspc.o ft_itoa.o ft_memalloc.o ft_memccpy.o ft_memchr.o \
	ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o ft_putchar.o \
	ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o \
	ft_putstr.o ft_putstr_fd.o ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o \
	ft_strcpy.o ft_strdel.o ft_strdup.o ft_strequ.o ft_striter.o ft_striteri.o \
	ft_strjoin.o ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o \
	ft_strncmp.o ft_strncpy.o ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o \
	ft_strsplit.o ft_strstr.o ft_strsub.o ft_strtrim.o ft_tolower.o ft_toupper.o \
	ft_isupper.o ft_strtol.o ft_strnotwhgt.o ft_strsgnstat.o ft_lstnew.o \
	ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o

all: $(NAME)

$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

ft_atoi.o: ft_atoi.c
	gcc -Wall -Wextra -Werror -c -o ft_atoi.o ft_atoi.c

ft_bzero.o: ft_bzero.c
	gcc -Wall -Wextra -Werror -c -o ft_bzero.o ft_bzero.c

ft_isalnum.o: ft_isalnum.c
	gcc -Wall -Wextra -Werror -c -o ft_isalnum.o ft_isalnum.c

ft_isalpha.o: ft_isalpha.c
	gcc -Wall -Wextra -Werror -c -o ft_isalpha.o ft_isalpha.c

ft_isascii.o: ft_isascii.c
	gcc -Wall -Wextra -Werror -c -o ft_isascii.o ft_isascii.c

ft_isdigit.o: ft_isdigit.c
	gcc -Wall -Wextra -Werror -c -o ft_isdigit.o ft_isdigit.c

ft_isprint.o: ft_isprint.c
	gcc -Wall -Wextra -Werror -c -o ft_isprint.o ft_isprint.c

ft_isupper.o: ft_isupper.c
	gcc -Wall -Wextra -Werror -c -o ft_isupper.o ft_isupper.c

ft_iswhtspc.o: ft_iswhtspc.c
	gcc -Wall -Wextra -Werror -c -o ft_iswhtspc.o ft_iswhtspc.c

ft_itoa.o: ft_itoa.c
	gcc -Wall -Wextra -Werror -c -o ft_itoa.o ft_itoa.c

ft_memalloc.o: ft_memalloc.c
	gcc -Wall -Wextra -Werror -c -o ft_memalloc.o ft_memalloc.c

ft_memccpy.o: ft_memccpy.c
	gcc -Wall -Wextra -Werror -c -o ft_memccpy.o ft_memccpy.c

ft_memchr.o: ft_memchr.c
	gcc -Wall -Wextra -Werror -c -o ft_memchr.o ft_memchr.c

ft_memcmp.o: ft_memcmp.c
	gcc -Wall -Wextra -Werror -c -o ft_memcmp.o ft_memcmp.c

ft_memcpy.o: ft_memcpy.c
	gcc -Wall -Wextra -Werror -c -o ft_memcpy.o ft_memcpy.c

ft_memdel.o: ft_memdel.c
	gcc -Wall -Wextra -Werror -c -o ft_memdel.o ft_memdel.c

ft_memmove.o: ft_memmove.c
	gcc -Wall -Wextra -Werror -c -o ft_memmove.o ft_memmove.c

ft_memset.o: ft_memset.c
	gcc -Wall -Wextra -Werror -c -o ft_memset.o ft_memset.c

ft_putchar.o: ft_putchar.c
	gcc -Wall -Wextra -Werror -c -o ft_putchar.o ft_putchar.c

ft_putchar_fd.o: ft_putchar_fd.c
	gcc -Wall -Wextra -Werror -c -o ft_putchar_fd.o ft_putchar_fd.c

ft_putendl.o: ft_putendl.c
	gcc -Wall -Wextra -Werror -c -o ft_putendl.o ft_putendl.c

ft_putendl_fd.o: ft_putendl_fd.c
	gcc -Wall -Wextra -Werror -c -o ft_putendl_fd.o ft_putendl_fd.c

ft_putnbr.o: ft_putnbr.c
	gcc -Wall -Wextra -Werror -c -o ft_putnbr.o ft_putnbr.c

ft_putnbr_fd.o: ft_putnbr_fd.c
	gcc -Wall -Wextra -Werror -c -o ft_putnbr_fd.o ft_putnbr_fd.c

ft_putstr.o: ft_putstr.c
	gcc -Wall -Wextra -Werror -c -o ft_putstr.o ft_putstr.c

ft_putstr_fd.o: ft_putstr_fd.c
	gcc -Wall -Wextra -Werror -c -o ft_putstr_fd.o ft_putstr_fd.c

ft_strcat.o: ft_strcat.c
	gcc -Wall -Wextra -Werror -c -o ft_strcat.o ft_strcat.c

ft_strchr.o: ft_strchr.c
	gcc -Wall -Wextra -Werror -c -o ft_strchr.o ft_strchr.c

ft_strclr.o: ft_strclr.c
	gcc -Wall -Wextra -Werror -c -o ft_strclr.o ft_strclr.c

ft_strcmp.o: ft_strcmp.c
	gcc -Wall -Wextra -Werror -c -o ft_strcmp.o ft_strcmp.c

ft_strcpy.o: ft_strcpy.c
	gcc -Wall -Wextra -Werror -c -o ft_strcpy.o ft_strcpy.c

ft_strdel.o: ft_strdel.c
	gcc -Wall -Wextra -Werror -c -o ft_strdel.o ft_strdel.c

ft_strdup.o: ft_strdup.c
	gcc -Wall -Wextra -Werror -c -o ft_strdup.o ft_strdup.c

ft_strequ.o: ft_strequ.c
	gcc -Wall -Wextra -Werror -c -o ft_strequ.o ft_strequ.c

ft_striter.o: ft_striter.c
	gcc -Wall -Wextra -Werror -c -o ft_striter.o ft_striter.c

ft_striteri.o: ft_striteri.c
	gcc -Wall -Wextra -Werror -c -o ft_striteri.o ft_striteri.c

ft_strjoin.o: ft_strjoin.c
	gcc -Wall -Wextra -Werror -c -o ft_strjoin.o ft_strjoin.c

ft_strlcat.o: ft_strlcat.c
	gcc -Wall -Wextra -Werror -c -o ft_strlcat.o ft_strlcat.c

ft_strlen.o: ft_strlen.c
	gcc -Wall -Wextra -Werror -c -o ft_strlen.o ft_strlen.c

ft_strmap.o: ft_strmap.c
	gcc -Wall -Wextra -Werror -c -o ft_strmap.o ft_strmap.c

ft_strmapi.o: ft_strmapi.c
	gcc -Wall -Wextra -Werror -c -o ft_strmapi.o ft_strmapi.c

ft_strncat.o: ft_strncat.c
	gcc -Wall -Wextra -Werror -c -o ft_strncat.o ft_strncat.c

ft_strncmp.o: ft_strncmp.c
	gcc -Wall -Wextra -Werror -c -o ft_strncmp.o ft_strncmp.c

ft_strncpy.o: ft_strncpy.c
	gcc -Wall -Wextra -Werror -c -o ft_strncpy.o ft_strncpy.c

ft_strnequ.o: ft_strnequ.c
	gcc -Wall -Wextra -Werror -c -o ft_strnequ.o ft_strnequ.c

ft_strnew.o: ft_strnew.c
	gcc -Wall -Wextra -Werror -c -o ft_strnew.o ft_strnew.c

ft_strnstr.o: ft_strnstr.c
	gcc -Wall -Wextra -Werror -c -o ft_strnstr.o ft_strnstr.c

ft_strrchr.o: ft_strrchr.c
	gcc -Wall -Wextra -Werror -c -o ft_strrchr.o ft_strrchr.c

ft_strsplit.o: ft_strsplit.c
	gcc -Wall -Wextra -Werror -c -o ft_strsplit.o ft_strsplit.c

ft_strstr.o: ft_strstr.c
	gcc -Wall -Wextra -Werror -c -o ft_strstr.o ft_strstr.c

ft_strsub.o: ft_strsub.c
	gcc -Wall -Wextra -Werror -c -o ft_strsub.o ft_strsub.c

ft_strtrim.o: ft_strtrim.c
	gcc -Wall -Wextra -Werror -c -o ft_strtrim.o ft_strtrim.c

ft_strtol.o: ft_strtol.c
	gcc -Wall -Wextra -Werror -c -o ft_strtol.o ft_strtol.c

ft_tolower.o: ft_tolower.c
	gcc -Wall -Wextra -Werror -c -o ft_tolower.o ft_tolower.c

ft_toupper.o: ft_toupper.c
	gcc -Wall -Wextra -Werror -c -o ft_toupper.o ft_toupper.c

ft_strnotwhgt.o: ft_strnotwhgt.c
	gcc -Wall -Wextra -Werror -c -o ft_strnotwhgt.o ft_strnotwhgt.c

ft_strsgnstat.o: ft_strsgnstat.c
	gcc -Wall -Wextra -Werror -c -o ft_strsgnstat.o ft_strsgnstat.c

ft_lstnew.o: ft_lstnew.c
	gcc -Wall -Wextra -Werror -c -o ft_lstnew.o ft_lstnew.c

ft_lstdelone.o: ft_lstdelone.c
	gcc -Wall -Wextra -Werror -c -o ft_lstdelone.o ft_lstdelone.c

ft_lstdel.o: ft_lstdel.c
	gcc -Wall -Wextra -Werror -c -o ft_lstdel.o ft_lstdel.c

ft_lstadd.o: ft_lstadd.c
	gcc -Wall -Wextra -Werror -c -o ft_lstadd.o ft_lstadd.c

ft_lstiter.o: ft_lstiter.c
	gcc -Wall -Wextra -Werror -c -o ft_lstiter.o ft_lstiter.c

ft_lstmap.o: ft_lstmap.c
	gcc -Wall -Wextra -Werror -c -o ft_lstmap.o ft_lstmap.c

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
