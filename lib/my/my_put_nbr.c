/*
** my_put_nbr.c for putnbr in /home/bayard_a/CPE_2014_bsq/lib/my
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Sat Jan 17 14:43:45 2015 Antoine Bayard
** Last update Sat Jan 17 14:43:47 2015 Antoine Bayard
*/

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if ((nb <= 9) && (nb >= 0))
    {
      my_putchar(nb + 48);
    }
  if (nb > 9)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  return (0);
}
