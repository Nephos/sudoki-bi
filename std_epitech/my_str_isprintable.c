/*
** my_str_isprintable.c for  in /home/poulet_a/tmp-rendu/Piscine-C-Jour_06
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Tue Oct  8 14:06:30 2013 poulet_a
** Last update Wed Jan 29 12:58:28 2014 poulet_a
*/

#include "regex.h"

int	my_str_isprintable(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] > 122)
	return (0);
      i = i + 1;
    }
  return (1);
}
