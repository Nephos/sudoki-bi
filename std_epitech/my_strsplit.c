/*
** my_strsplit.c for  in /home/poulet_a/projets/minishell1/src
** 
** Made by poulet_a
** Login   <poulet_a@epitech.eu>
** 
** Started on  Wed Dec 18 09:05:09 2013 poulet_a
** Last update Wed Jan 29 12:54:49 2014 poulet_a
*/

#include <stdlib.h>
#include "my.h"

unsigned int	my_strsplit_countsep(char *str, const char sep)
{
  unsigned int	i;
  unsigned int	n;

  if (str == NULL || str[0] == 0)
    return (0);
  n = 1;
  i = 0;
  while (str[i])
    {
      if (str[i] == sep && str[i + 1] && str[i + 1] != sep)
	n++;
      i++;
    }
  return (n);
}

char		**my_strsplit(char *str, const char sep)
{
  char		**out;
  char		*str_cpy;
  unsigned int	i;
  unsigned int	n;

  if (str == NULL || str[0] == 0)
    return (NULL);
  out = malloc(sizeof(char*) * (my_strsplit_countsep(str, sep) + 1));
  RET_NULL_NULL(out);
  str_cpy = my_strdup(str);
  n = 1;
  i = 0;
  out[0] = str_cpy;
  while (str[i])
    {
      if (str[i] == sep)
	{
	  str_cpy[i] = 0;
	  if (str[i + 1] && str[i + 1] != sep)
	    out[n++] = str_cpy + i + 1;
	}
      i++;
    }
  out[n] = 0;
  return (out);
}
