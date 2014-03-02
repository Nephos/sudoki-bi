/*
** solve.c for  in /home/poulet_a/projets/sudoki-bi
**
** Made by poulet_a
** Login   <poulet_a@epitech.net>
**
** Started on  Fri Feb 28 22:21:17 2014 poulet_a
** Last update Sat Mar  1 04:32:52 2014 ghukas_g
*/

#include "elementary.h"

char	valid_grid(char grid[9][9], char y, char x)
{
  char	n;

  if (grid[y][x] != 0)
    {
      if (y == 8 && x == 8)
	return (1);
      return (valid_grid(grid, ((x + 1) == 9) ? (y + 1) : (y), (x + 1) % 9));
    }
  n = 1;
  while (n <= 9)
    {
      if (n_valid(grid, y, x, n))
	{
	  grid[y][x] = n;
	  if (y == 8 && x == 8)
	    return (1);
	  if (valid_grid(grid, ((x + 1) == 9) ? (y + 1) : (y), (x + 1) % 9))
	    return (1);
	}
      n++;
    }
  grid[y][x] = 0;
  return (0);
}
