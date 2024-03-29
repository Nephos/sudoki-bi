/*
** elementary.c for  in /home/poulet_a/projets/sudoki-bi/src
**
** Made by poulet_a
** Login   <poulet_a@epitech.net>
**
** Started on  Fri Feb 28 21:55:42 2014 poulet_a
** Last update Mon Mar  3 16:18:54 2014 poulet_a
*/

#include "ret.h"

char		n_not_in_line(char grid[9][9],
			      char y,
			      char n)
{
  register char	i;

  i = 0;
  while (i < 9)
    {
      RET_ONE_ZERO((grid[y][i] == n));
      i++;
    }
  return (1);
}

char		n_not_in_column(char grid[9][9],
				char x,
				char n)
{
  register char	i;

  i = 0;
  while (i < 9)
    {
      RET_ONE_ZERO((grid[i][x] == n));
      i++;
    }
  return (1);
}

char		n_not_in_square(char grid[9][9],
				char y,
				char x,
				char n)
{
  register char	i;
  register char	py;
  register char	px;

  x = x - x % 3;
  y = y - y % 3;
  px = x;
  py = y;
  i = 0;
  while (i < 9)
    {
      py = y + i / 3;
      px = x + i % 3;
      RET_ONE_ZERO((grid[py][px] == n));
      i++;
    }
  return (1);
}

char	n_valid(char grid[9][9],
		char y,
		char x,
		char n)
{
  if (n_not_in_square(grid, y, x, n)
      && n_not_in_line(grid, y, n)
      && n_not_in_column(grid, x, n))
    return (1);
  return (0);
}
