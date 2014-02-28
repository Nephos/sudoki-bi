/*
** solve.c for  in /home/poulet_a/projets/sudoki-bi
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Fri Feb 28 22:21:17 2014 poulet_a
** Last update Fri Feb 28 23:54:29 2014 poulet_a
*/

#include "elementary.h"

char	valid_grid(char grid[9][9], char y, char x)
{
  int	n;

  if (y == 9 && x == 9)
    return (1);
  if (grid[y][x] != 0)
    return (valid_grid(grid, (x == 9) ? (y + 1) : (y), (x + 1) % 9));
  n = 1;
  while (n < 9)
    {
      if (n_valid(grid, y, x, n))
	{
	  grid[x][y] = n;
	  if (valid_grid(grid, (x == 9) ? (y + 1) : (y), (x + 1) % 9))
	    return (1);
	}
      n++;
    }
  grid[x][y] = 0;
  return (0);
}
