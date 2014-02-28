/*
** my_malloc.c for  in /home/poulet_a/projets/regex
** 
** Made by poulet_a
** Login   <poulet_a@epitech.eu>
** 
** Started on  Thu Dec 19 15:26:57 2013 poulet_a
** Last update Thu Jan  9 15:55:35 2014 poulet_a
*/

#include <stdlib.h>
#include "my.h"

void	*xmalloc(size_t size)
{
  void	*ptr;

  ptr = malloc(size);
  if (ptr == NULL)
    exit(1);
  return (ptr);
}

void		*my_catlloc(char *s1, char *s2)
{
  unsigned int	i;
  unsigned int	j;
  char		*out;

  RET_NULL_NULL(s1);
  RET_NULL_NULL(s2);
  TWO_ZERO(i, j);
  STREND(s1, i);
  STREND(s2, j);
  out = malloc(i + j + 1);
  RET_NULL_NULL(out);
  TWO_ZERO(i, j);
  while (s1[i])
    {
      out[i] = s1[i];
      i++;
    }
  while (s2[j])
    out[i++] = s2[j++];
  out[i] = 0;
  return (out);
}
