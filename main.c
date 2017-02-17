/*
** main.c for main.c in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Fri Jan  9 17:59:01 2015 Antoine Bayard
** Last update Sun Jan 18 17:45:24 2015 Antoine Bayard
*/

#include "my.h"

int	main(int argc, char **argv)
{
  int	fd;

  if (argc < 2 || argc > 2)
    exit(my_puterror(ARGS_ERROR));
  if (fd = open(argv[1], O_RDONLY) == 0)
    exit(my_puterror(OPEN_ERROR));
  init_bsq(fd, argv[1]);
  close(fd);
}
