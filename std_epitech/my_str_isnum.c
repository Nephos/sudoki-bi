/*
** my_str_isnum.c for  in /home/poulet_a/tmp-rendu/Piscine-C-Jour_06
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Mon Oct  7 22:07:13 2013 poulet_a
** Last update Wed Jan 29 12:58:20 2014 poulet_a
*/

#include "regex.h"

int	my_str_isnum(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 48 || str[i] > 57)
	return (0);
      i = i + 1;
    }
  return (1);
}
