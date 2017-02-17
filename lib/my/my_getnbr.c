/*
** my_getnbr.c for getnbr in /home/bayard_a/CPE_2014_Pushwap/pushswap
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Thu Dec 11 13:28:10 2014 Antoine Bayard
** Last update Sat Jan 17 14:52:48 2015 Antoine Bayard
*/

int	my_getnbr(char *str)
{
  int	nbr;
  int	x;

  nbr = 0;
  x = 1;
  while (*str)
    {
      if (*str == '-' && *(str + 1) >= '0' && *(str + 1) <= '9')
	x = -1;
      if (*str >= '0' && *str <= '9')
	{
	  while (*str >= '0' && *str <= '9')
	    {
	      nbr = (nbr * 10) + (*str - '0');
	      str = str + 1;
	    }
	  if (nbr >= -2147483648 &&  nbr <= 2147483647)
	    return (nbr * x);
	}
      else if (*str != '-' && *str != '+')
	return (0);
      str = str + 1;
    }
  return (0);
}
