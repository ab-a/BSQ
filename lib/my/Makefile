##
## Makefile for makefile in /home/bayard_a/CPE_2014_bsq/lib/my
## 
## Made by Antoine Bayard
## Login   <bayard_a@epitech.net>
## 
## Started on  Sun Jan 18 17:41:27 2015 Antoine Bayard
## Last update Sun Jan 18 17:41:29 2015 Antoine Bayard
##

NAME	= libmy.a

HEADER	= my.h

SRCS	= my_string.c \
	  my_put_nbr.c \
	  my_getnbr.c \

CCO	= ar rc

CCL	= cc -c

RM	= rm -f

RL	= ranlib

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

$(NAME):
	 $(CCL) $(SRCS)
	 $(CCO) $(NAME) $(OBJS)
	 $(RL) $(NAME)

clean:
	 $(RM) $(OBJS)

fclean: clean
	 $(RM) libmy.a

re: fclean all

.PHONY: all clean fclean re
