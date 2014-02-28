/*
** my_str_isalpha.c for  in /home/poulet_a/tmp-rendu/Piscine-C-Jour_06
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Mon Oct  7 21:59:01 2013 poulet_a
** Last update Wed Jan 29 12:57:59 2014 poulet_a
*/

#include "regex.h"

int	my_str_isalpha(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 48)
	return (0);
      else if (str[i] >= 58 && str[i] <= 64)
	return (0);
      else if (str[i] >= 91 && str[i] <= 96)
	return (0);
      else if (str[i] >= 123)
	return (0);
      i = i + 1;
    }
  return (1);
}
