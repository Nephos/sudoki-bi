##
## Makefile for  in /home/poulet_a/rendu/sudoki-bi
## 
## Made by poulet_a
## Login   <poulet_a@epitech.net>
## 
## Started on  Fri Feb 28 20:13:33 2014 poulet_a
## Last update Fri Feb 28 20:16:02 2014 poulet_a
##

CC	=	cc

RM	=	rm -f

CFLAGS  +=      -I. -Ilibs -Llibs -lmy
CFLAGS	+=	-Wall -Wextra -Wextra -pedantic

NAME	=	sudoki-bi

BIN	=	bin

SRCS	=	src/main.c

LIBS_DIR=	std_epitech

all:		libs $(NAME)

libs:
		@(cd $(LIBS_DIR) && $(MAKE))
		@(cd $(LIBS_DIR) && $(MAKE) libs)

$(NAME):	$(OBJS)
		mkdir -p $(BIN)
		cc $(SRCS) -o $(BIN)/$(NAME) $(CFLAGS)

clean:
		@(cd $(LIBS_DIR) && $(MAKE) $@)
		$(RM) $(OBJS)

fclean:		clean
		@(cd $(LIBS_DIR) && $(MAKE) $@)
		@(cd $(LIBS_DIR) && $(MAKE) rmlibs)
		$(RM) $(NAME)

re:		fclean all
		@(cd $(LIBS_DIR) && $(MAKE) relibs)

.PHONY:		clean fclean all re libs
