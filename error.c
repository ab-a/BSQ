/*
** check_errors.c for error in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Fri Jan  9 18:03:44 2015 Antoine Bayard
** Last update Sun Jan 18 21:28:19 2015 Antoine Bayard
*/

#include "my.h"

int	check_char(char c, int i)
{
  if (i == 0)
    return (0);
  if (c == '\n')
    return (0);
  if (c == '.')
    return (0);
  if (c == 'o')
    return (0);
  exit(my_puterror(CHAR_ERROR));
}

int	check_number(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	return (0);
      if (str[i] < '0')
	exit(my_puterror(MAP_ERROR));
      if (str[i] > '9')
	exit(my_puterror(MAP_ERROR));
      else
	i++;
    }
  return (0);
}

int	check_return_size(int nb)
{
  if (nb > 0)
    return (0);
  if (nb == 0)
    exit(my_puterror(MAP_ERROR));
  if (nb == -1)
    exit(my_puterror(FILE_ERROR));
}

int	check_len(char **tab, int i, int y, int x)
{
  int	j;

  j = 1;
  while (j < y)
    {
      if (my_strlen(tab[j]) != x)
	exit(my_puterror(FILE_ERROR));
      else
	j++;
    }
  return (0);
}

int	init_bsq(int fd, char *str)
{
  int	width;
  int	height;

  width = check_width(fd, str);
  height = check_height(fd, str);
  if (height == 1)
    {
      close(fd);
      square_one(str);
    }
  if (height < 1)
    exit(my_puterror(MAP_ERROR));
  if (width < height)
    exit(my_puterror(MAP_ERROR));
  stock_map(width, height, str, fd);
  return (0);
}
