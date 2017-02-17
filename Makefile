##
## Makefile for makefile in /home/bayard_a/CPE_2014_bsq
## 
## Made by Antoine Bayard
## Login   <bayard_a@epitech.net>
## 
## Started on  Fri Jan  9 18:04:35 2015 Antoine Bayard
## Last update Sun Jan 18 21:14:19 2015 Antoine Bayard
##

NAME	= bsq

CC	= cc -Wall -Wextra -Werror

RM	= rm -f

HEADER	= -Iinclude

LIB	= lib/my/libmy.a

SRCS	= main.c \
	  search.c \
	  error.c \
	  size.c \
	  stock_map.c \
	  draw.c \
	  init.c \
	  square_one.c

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

$(NAME): 
	 cd ./lib/my; make
	 gcc -c $(SRCS) $(HEADER)
	 $(CC) -o $(NAME) $(OBJS) $(LIB) $(HEADER)

clean:	
	$(RM) $(OBJS)
	cd ./lib/my; make clean

fclean:	clean
	$(RM) $(NAME)
	cd ./lib/my; make fclean

re: fclean all
	cd ./lib/my; make re

.PHONY: clean fclean all
