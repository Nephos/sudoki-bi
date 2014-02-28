/*
** read_grille.c for  in /home/ghukas_g/sudoku/src
**
** Made by ghukas_g
** Login   <ghukas_g@epitech.net>
**
** Started on  Fri Feb 28 21:53:43 2014 ghukas_g
** Last update Sat Mar  1 00:00:04 2014 poulet_a
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ret.h"
#include "get_next_line.h"

# define IS_NUM(nb)	(((nb) < '0' || (nb) > '9') ? (-1) : (0))

char	check_line(char *line, char tab[9])
{
  char	i;
  char	j;

  if (strncmp(line, "| ", 2) != 0)
    return (-1);
  i = 2;
  j = 0;
  while (i < 20)
    {
      if (IS_NUM(line[i]) == -1)
	{
	  if (line[i] == ' ')
	    line[i] = '0';
	  else
	    return (-1);
	}
      tab[j] = line[i] - '0';
      i = i + 2;
      j = j + 1;
    }
  return((line[i - 1] == '|') ? (0) : (-1));
}

char	read_grille(char tab[9][9])
{
  char	i;
  char	*line;

  RET_NULL_LONE((line = get_next_line(0)));
  if (strcmp(line, "|------------------|") != 0)
    return (-1);
  i = 0;
  while (i < 9)
    {
      RET_NULL_LONE((line = get_next_line(0)));
      RET_LONE_LONE((check_line(line, tab[i])));
      i = i + 1;
    }
  RET_NULL_LONE((line = get_next_line(0)));
  if (strcmp(line, "|------------------|") != 0)
    return (-1);
  return (0);
}
