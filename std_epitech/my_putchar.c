/*
** my_putchar.c for  in /home/poulet_a/tmp-rendu/Piscine-C-lib/my
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Tue Oct  8 16:39:31 2013 poulet_a
** Last update Mon Feb  3 11:31:03 2014 poulet_a
*/

#include <unistd.h>

int	my_putchar(char c)
{
  return (write(1, &c, 1));
}

int	my_putchar_err(char c)
{
  return (write(2, &c, 1));
}

int	my_putc(int c)
{
  return (write(1, &c, sizeof(c)));
}
