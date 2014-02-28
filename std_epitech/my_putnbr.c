/*
** my_putnbr.c for  in /home/poulet_a/rendu/PSU_2013_my_printf
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Wed Nov 13 16:53:34 2013 poulet_a
** Last update Mon Feb  3 11:38:51 2014 poulet_a
*/

#include "my.h"

long		my_putnbr(long nbr)
{
  return (my_putnbr_base_s(nbr, "0123456789"));
}

long		my_putnbr_base(long nbr, char *base)
{
  return (my_putnbr_base_s(nbr, base));
}

long		my_putnbr_base_s(long nbr, char *base)
{
  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= -1;
    }
  if (nbr / my_strlen(base) > 0)
    my_putnbr_base_s(nbr / my_strlen(base), base);
  my_putchar(base[nbr % my_strlen(base)]);
  return (nbr);
}

unsigned long	my_putnbr_base_u(unsigned long nbr, char *base)
{
  if (nbr / my_strlen(base) > 0)
    my_putnbr_base_u(nbr / my_strlen(base), base);
  my_putchar(base[nbr % my_strlen(base)]);
  return (nbr);
}
