/*
** square_one.c for square_one in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Sun Jan 18 21:03:50 2015 Antoine Bayard
** Last update Sun Jan 18 21:30:34 2015 Antoine Bayard
*/

#include "my.h"

int	square_one(char *str)
{
  int	res;
  int	fd;
  int	i;
  char	c;

  i = 0;
  if (fd = open(str, O_RDONLY) == -1)
    exit(my_puterror(MAP_ERROR));
  while (res != 0)
    {
      res = read(fd, &c, 1);
      i++;
      if (i == 3)
	{
	  if (c == '.')
	    my_putstr(SQUARE);
	  if (c == 'o')
	    my_putchar('o');
	}
    }
  my_putchar('\n');
  exit(0);
}
