NAME = fdf.a

SRC =	fdf.c				\
		ft_atoi.c			\
		ft_bzero.c			\
		ft_memset.c			\
		ft_putstr.c			\
		ft_realloctab.c		\
		ft_splitnbrs.c		\
		ft_strcat.c			\
		ft_strchr.c			\
		ft_strcpy.c			\
		ft_strdup.c			\
		ft_strjoin.c		\
		ft_strlen.c			\
		get_next_line.c		\
		main.c				\

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -Werror -Wextra

COMPL += -L/usr/X11/lib -lmlx -lXext -lX11 -lm

all : $(NAME)

$(NAME) :
	gcc -c $(CFLAGS) $(SRC) $(COMPL)
	gcc -o a.out *.o $(COMPL)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(OBJ) $(NAME) a.out

re : fclean all