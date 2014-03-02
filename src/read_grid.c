/*
** read_grid.c for  in /home/ghukas_g/sudoku/src
**
** Made by ghukas_g
** Login   <ghukas_g@epitech.net>
**
** Started on  Fri Feb 28 21:53:43 2014 ghukas_g
** Last update Sun Mar  2 16:11:48 2014 poulet_a
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ret.h"
#include "get_next_line.h"
#include "read_grid.h"

char	test_entire_grid(char tab[9][9])
{
  char	y;
  char	x;

  y = 0;
  while (y < 9)
    {
      x = 0;
      while (x < 9)
	{
	  if (n_valid(tab, y, x, grid[y][x]) > 3)
	    return (0);
	  x++;
	}
      y++;
    }
  return (1);
}

void	aff_grid(char grid[9][9], int i)
{
  char	y;
  char	x;

  y = 0;
  if (i != 0)
    printf("####################\n");
  printf("|------------------|\n");
  while (y < 9)
    {
      x = 0;
      printf("| ");
      while (x < 9)
	{
	  printf((x < 8) ? "%d " : "%d|\n", grid[y][x]);
	  x++;
	}
      y++;
    }
  printf("|------------------|\n");
}

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
  return ((line[i - 1] == '|') ? (0) : (-1));
}

char	read_grid(char tab[9][9])
{
  char	i;
  char	*line;

  RET_NULL_LONE((line = get_next_line(0)));
  if (strcmp(line, "|------------------|") != 0)
    return (42);
  free(line);
  i = 0;
  while (i < 9)
    {
      RET_NULL_LONE((line = get_next_line(0)));
      RET_LONE_LONE((check_line(line, tab[i])));
      free(line);
      i = i + 1;
    }
  RET_NULL_LONE((line = get_next_line(0)));
  if (strcmp(line, "|------------------|") != 0)
    return (-1);
  return (0);
}
