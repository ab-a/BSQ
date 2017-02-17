/*
** search.c for search in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Fri Jan  9 18:05:18 2015 Antoine Bayard
** Last update Mon Jan 12 16:06:43 2015 Antoine Bayard
*/

#include "my.h"

t_pos		*search(char **tab, int x, int y, int s)
{
  t_pos		*ret;
  t_struct	st;

  if (!(ret = malloc(sizeof(t_pos))))
    exit(my_puterror(MALLOC_ERROR));
  ret->x = 0;
  ret->y = 1;
  while (ret->y < y)
    {
      if (check(tab, x, y, ret->x, ret->y, s) == 1)
	return (ret);
      ret->x++;
      if (ret->x == x)
	{
	  ret->y++;
	  ret->x = 0;
	}
    }
  free(ret);
  return (NULL);
}

t_pos	*check_max_size(char **tab, int width, int height, int *s)
{
  t_pos	*ret;
  t_pos	*save;

  *s = 0;
  save = NULL;
  while ((ret = search(tab, width, height, *s)) != NULL)
    {
      save = ret;
      *s = *s + 1;
    }
  *s = *s - 1;
  return (save);
}

int	check(char **tab, int x, int y, int i, int j, int s)
{
  int	w;
  int	z;

  w = 0;
  z = 0;
  while (z != s)
    {
      if (w + i >= x || z + j > y)
	return (0);
      if (tab[z + j][w + i] == 'o')
	return (0);
      w++;
      if (w == s)
	{
	  w = 0;
	  z++;
	}
    }
  return (1);
}
