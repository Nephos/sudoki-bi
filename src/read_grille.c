/*
** read_grille.c for  in /home/ghukas_g/sudoku/src
**
** Made by ghukas_g
** Login   <ghukas_g@epitech.net>
**
** Started on  Fri Feb 28 21:53:43 2014 ghukas_g
** Last update Fri Feb 28 22:58:30 2014 ghukas_g
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ret.h"
#include "get_next_line.h"

typedef unsigned char t_uchar;

# define IS_NUM(nb)	(((nb) < '0' || (nb) > '9') ? (-1) : (0))

char			*check_line(char *line)
{
  t_uchar		i;
  t_uchar		j;
  char			*tab;

  RET_NULL_NULL((tab = malloc(sizeof(char) * 9)));
  if (strncmp(line, "| ", 2) != 0)
    return (NULL);
  i = 2;
  j = 0;
  while (i < 20)
    {
      if (IS_NUM(line[i]) == -1)
	return (NULL);
      tab[j] = line[i] - '0';
      i = i + 2;
      j = j + 1;
    }
  return((line[i - 1] == '|') ? (tab) : (NULL));
}

char			**read_grille()
{
  t_uchar		i;
  char			**tab;
  char			*line;

  RET_NULL_NULL((tab = malloc(sizeof(char *) * 9)));
  RET_NULL_NULL((line = get_next_line(0)));
  if (strcmp(line, "|------------------|") != 0)
    return (NULL);
  i = 0;
  while (i < 9)
    {
      RET_NULL_NULL((line = get_next_line(0)));
      RET_NULL_NULL((tab[i] = check_line(line)));
      i = i + 1;
    }
  RET_NULL_NULL((line = get_next_line(0)));
  if (strcmp(line, "|------------------|") != 0)
    return (NULL);
  return (tab);
}
