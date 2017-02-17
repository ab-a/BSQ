/*
** my.h for my.h in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Fri Jan  9 18:05:41 2015 Antoine Bayard
** Last update Sun Jan 18 19:20:11 2015 Antoine Bayard
*/

#ifndef MY_H_
# define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "struct.h"
#include "macro.h"

int		main(int, char **);
int		check_height(int, char *);
int		check_width(int, char *);
t_save		init_save_struct(t_save);
char		**stock_map(int, int, char *, int);
t_pos		*check_max_size(char **, int, int, int *);
char		*return_size(char *, int, char, int);
int		check_return_size(int);
char		**stock_map(int, int, char *, int);
t_struct	init_search_struct(int, int, int);
t_struct	init_st(int x, int y, int fd);
t_save		init_save_struct(t_save s);

#endif
