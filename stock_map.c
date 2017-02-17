/*
** stock_map.c for stock_map in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Fri Jan  9 18:02:00 2015 Antoine Bayard
** Last update Sun Jan 18 20:05:52 2015 Antoine Bayard
*/

#include "my.h"

char	**stock_map2(t_save s, t_struct st, char **str)
{
  while (s.res != 0)
    {
      s.res = read(st.fd, &s.s, 1);
      check_char(s.s, s.i);
      {
	if (s.s == '\n' && s.i < st.y)
	  {
	    str[s.i++][s.z] = '\0';
	    s.z = 0;
	    s.res = read(st.fd, &s.s, 1);
	  }
	str[s.i][s.z++] = s.s;
      }
    }
  check_len(str, s.i, st.y, st.x);
  return (str);
}

char		**stock_map(int x, int y, char *str, int fd)
{
  t_size	stock;
  t_save	s;
  t_pos		*r;
  t_struct	st;

  s = init_save_struct(s);
  if (!(stock.tab = malloc((y + 2) * sizeof(char *))))
    exit(my_puterror(MALLOC_ERROR));
  while (s.i <= y + 1)
    if (!(stock.tab[s.i++] = malloc((x + 1) * sizeof(char))))
      exit(my_puterror(MALLOC_ERROR));
  s.i = 0;
  if ((fd = open(str, O_RDONLY)) == -1)
    exit(my_puterror(OPEN_ERROR));
  st = init_st(x, y, fd);
  stock.tab = stock_map2(s, st, stock.tab);
  close(fd);
  r = check_max_size(stock.tab, x, y, &s.i);
  draw_map(r, stock.tab, x, y, s.i);
  free(stock.tab);
}

char	*return_size(char *str, int j, char s, int fd)
{
  int	i;
  int	nb;
  int	y;
  char	*tmp;

  i = 0;
  y = 0;
  if (!(str = malloc(sizeof(char *) * SAVE)))
    exit(my_puterror(MALLOC_ERROR));
  if (!(tmp = malloc(sizeof(char *) * SAVE)))
    exit(my_puterror(MALLOC_ERROR));
  while (s != '\n')
    {
      nb = read(fd, &s, 1);
      check_return_size(nb);
      str[i] = s;
      tmp[i] = str[i];
      i++;
    }
  i = 0;
  check_number(str);
  return (str);
}
