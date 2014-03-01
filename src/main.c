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
  printf("|------------------|\n");
  while (y < 9)
    {
      x = 0;
      printf("| ",y);
      while (x < 9)
	{
	  if (x < 8)
	    printf("%d ", grid[y][x]);
	  else
	    printf("%d", grid[y][x]);
	  x++;
	}
      printf("|\n");
      y++;
    }
  printf("|------------------|\n");
}

int	main()
{
  char	tab[9][9];
  char	ret;

  if ((read_grid(tab)) == -1)
    return (-1);
  ret = valid_grid(tab, 0, 0);
  if (ret)
    aff_grid(tab);
  return (ret^1);
}
