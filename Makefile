##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./bsq.c	\
		./bsq.h	\
		./sizemap.c	\
		./square_finder.c	\
		./error.c	\
		./struct_variable.c	\
		./lib/my/my_printf.c	\
		./lib/my/my_putchar.c	\
		./lib/my/my_put_nbr.c	\
		./lib/my/my_putstr.c	\
		./lib/my/my_getnbr.c		\
		./lib/my.h	\

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(SRC) -o $(NAME)

clean:
	rm *.o
	rm lib/my/*.o

fclean: clean
	rm $(NAME)

re:	all
	make clean
