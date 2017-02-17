/*
** string.c for string.c in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Fri Jan  9 18:11:10 2015 Antoine Bayard
** Last update Sat Jan 10 14:35:06 2015 Antoine Bayard
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void	my_puterror(char *str)
{
  write(2, str, my_strlen(str));
}
