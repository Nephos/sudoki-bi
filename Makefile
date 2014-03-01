##
## Makefile for  in /home/poulet_a/rendu/sudoki-bi
##
## Made by poulet_a
## Login   <poulet_a@epitech.net>
##
## Started on  Fri Feb 28 20:13:33 2014 poulet_a
## Last update Sat Mar  1 06:17:08 2014 poulet_a
##

CC	=	cc -g

RM	=	rm -f

CFLAGS	+=	-Isrc

NAME	=	bin/sudoki-bi

SRCS	=	src/main.c \
		src/get_next_line.c \
		src/read_grille.c \
		src/elementary.c \
		src/solve.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		mkdir -p bin
		cc $(OBJS) -o $(NAME) $(CFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		clean fclean all re
