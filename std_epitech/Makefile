##
## Makefile for  in /home/poulet_a/projets/regex
## 
## Made by poulet_a
## Login   <poulet_a@epitech.eu>
## 
## Started on  Thu Dec 19 14:13:47 2013 poulet_a@epitech.eu
## Last update Tue Feb  4 10:13:54 2014 poulet_a
##

CC	=	cc

RM	=	rm -f

CFLAGS	+=	-W -Wall -Wextra -pedantic
CFLAGS	+=	-I.

NAME	=	libmy.a

HEADER	=	my.h

LIBDIR	=	../libs

SRCS	=	my_isin.c \
		my_malloc.c \
		my_strdup.c \
		my_match.c \
		my_str_isalpha.c \
		my_str_islower.c \
		my_str_isnum.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_strcmp.c \
		my_strcpy.c \
		my_strlen.c \
		my_strlowcase.c \
		my_putchar.c \
		my_putstr.c \
		my_getnbr.c \
		my_putnbr.c \
		my_power.c \
		get_next_line.c \
		my_strsplit.c \
		my_sleep.c \
		my_list.c \
		my_list_advanced.c \
		my_get_env.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

libs:		all
		- mkdir -p $(LIBDIR)
		cp $(NAME) $(LIBDIR)
		cp $(HEADER) $(LIBDIR)

rmlibs:
		$(RM) $(LIBDIR)/$(NAME)
		$(RM) $(LIBDIR)/$(HEADER)
		rmdir --ignore-fail-on-non-empty $(LIBDIR)

relibs:		rmlibs libs

$(NAME):	$(OBJS)
		cc -c $(SRCS) $(CFLAGS)
		ar rc $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		clean fclean all re libs rmlibs relibs
