/*
** my_strlen.c for  in /home/poulet_a/tmp-rendu/Piscine-C-Jour_04
** 
** Made by a
** Login   <poulet_a@epitech.net>
** 
** Started on  Tue Sep  3 10:04:37 2013 a
** Last update Thu Jan 16 11:29:57 2014 poulet_a
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	i;

  if (str == NULL)
    return (-1);
  i = 0;
  while (str[i++]);
  return (i - 1);
}
