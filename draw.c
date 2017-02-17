/*
** draw.c for draw.c in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Sun Jan 18 16:56:25 2015 Antoine Bayard
** Last update Sun Jan 18 20:27:32 2015 Antoine Bayard
*/

#include "my.h"

int		draw_map(t_pos *ret, char **tab, int x, int y, int s)
{
  t_size	stock;
  int		i;
  int		j;

  i = 0;
  j = 1;
  ret->y += (ret->y == 0);
  while (j <= y)
    {
      if (i >= ret->x && i < ret->x + s && j >= ret->y && j < ret->y + s)
	my_putstr(SQUARE);
      else
	my_putchar(tab[j][i]);
      i++;
      if (i == x)
	{
	  j++;
	  i = 0;
	  my_putchar('\n');
	}
    }
}
