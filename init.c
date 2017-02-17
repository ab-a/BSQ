/*
** init.c for init.c in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Sun Jan 18 19:14:15 2015 Antoine Bayard
** Last update Sun Jan 18 19:15:45 2015 Antoine Bayard
*/

#include "my.h"

t_struct	init_st(int x, int y, int fd)
{
  t_struct	s;

  s.fd = fd;
  s.x = x;
  s.y = y;
  return (s);
}

t_save	init_save_struct(t_save s)
{
  s.i = 0;
  s.z = 0;
  return (s);
}
