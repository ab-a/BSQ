/*
** check_square_dimensions.c for dimensions in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Fri Jan  9 18:00:22 2015 Antoine Bayard
** Last update Sun Jan 18 17:56:29 2015 Antoine Bayard
*/

#include "my.h"

int		check_height(int fd, char *str)
{
  t_size	stock;
  char		*buffer;
  int		height;
  int		res;
  int		i;
  int		j;
  char		s;

  i = 0;
  j = 0;
  if (!(buffer = malloc(sizeof(char) * 500)))
    exit(my_puterror(MALLOC_ERROR));
  if ((fd = open(str, O_RDONLY)) == -1)
    exit(my_puterror(OPEN_ERROR));
  height = my_getnbr(return_size(buffer, j, s, fd));
  free(buffer);
  return (height);
}

int	check_width(int fd, char *str)
{
  char	*buffer;
  int	width;
  int	res;
  int	j;
  int	y;
  char	s;

  width = 0;
  j = 0;
  if (!(buffer = malloc(sizeof(char) * 500)))
    exit(my_puterror(MALLOC_ERROR));
  if ((fd = open(str, O_RDONLY)) == -1)
    exit(my_puterror(OPEN_ERROR));
  buffer = return_size(buffer, j, s, fd);
  res = read(fd, &s, 1);
  width = 0;
  while (s != '\n')
    {
      res = read(fd, &s, 1);
      width++;
    }
  free(buffer);
  return (width);
}
