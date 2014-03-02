/*
** solve.c for  in /home/poulet_a/projets/sudoki-bi
**
** Made by poulet_a
** Login   <poulet_a@epitech.net>
**
** Started on  Fri Feb 28 22:21:17 2014 poulet_a
** Last update Sun Mar  2 17:32:41 2014 poulet_a
*/

#include "solve.h"
#include "elementary.h"

char	ret_grid(char grid[9][9], char y, char x, char mode)
{
  if (y == 8 && x == 8)
    {
      if (mode == 1)
	aff_grid(grid, y, x, mode);
      return (mode^1);
    }
  return (valid_grid(grid, ((x + 1) == 9) ?
		     (y + 1) : (y), (x + 1) % 9, mode));
}

char	valid_grid(char grid[9][9], char y, char x, char mode)
{
  char	n;

  if (grid[y][x] != 0)
    return (ret_grid(grid, y, x, mode));
  n = 1;
  while (n <= 9)
    {
      if (n_valid(grid, y, x, n) == 0)
	{
	  grid[y][x] = n;
	  if (y == 8 && x == 8)
	    {
	      if (mode == 1)
		aff_grid(grid, y, x, mode);
	      return (mode^1);
	    }
	  if (valid_grid(grid, ((x + 1) == 9) ? (y + 1)
			 : (y), (x + 1) % 9, mode))
	    return (1);
	}
      n++;
    }
  grid[y][x] = 0;
  return (0);
}
