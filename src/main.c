/*
** main.c for  in /home/poulet_a/rendu/sudoki-bi
**
** Made by poulet_a
** Login   <poulet_a@epitech.net>
**
** Started on  Fri Feb 28 20:16:09 2014 poulet_a
*/

#include <stdlib.h>
#include <stdio.h>
#include "ret.h"
#include "get_next_line.h"
#include "solve.h"

char	read_grid(char tab[9][9]);

void	aff_grid(char grid[9][9])
{
  char	y;
  char	x;

  y = 0;
  while (y < 9)
    {
      x = 0;
      printf("%d : ",y);
      while (x < 9)
	{
	  printf("%d ", grid[y][x]);
	  x++;
	}
      printf("\n");
      y++;
    }
}

int	main()
{
  char	tab[9][9];

  if ((read_grid(tab)) == -1)
    return (-1);
  valid_grid(tab, 0, 0);
  aff_grid(tab);
  return (0);
}
