/*
** struct.h for struct in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Fri Jan  9 18:04:58 2015 Antoine Bayard
** Last update Sun Jan 18 19:08:45 2015 Antoine Bayard
*/

#ifndef STRUCT_H_
# define STRUCT_H_

typedef struct	s_size
{
  char		**tab;
  int		i;
  int		res;
  char		s;
  int		z;
  int		x;
  int		y;
}		t_size;

typedef struct	s_pos
{
  int		x;
  int		y;
}		t_pos;

typedef struct	s_save
{
  int		i;
  int		res;
  int		s;
  int		z;
}		t_save;

typedef struct	s_struct
{
  int		x;
  int		y;
  int		fd;
}		t_struct;

t_pos	*bigger_square(char **, int, int, int *);

#endif
