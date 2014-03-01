/*
** elementary.c for  in /home/poulet_a/projets/sudoki-bi/src
**
** Made by poulet_a
** Login   <poulet_a@epitech.net>
**
** Started on  Fri Feb 28 21:55:42 2014 poulet_a
** Last update Sat Mar  1 01:14:30 2014 poulet_a
*/

#include "ret.h"

char	n_not_in_line(char grid[9][9],
		      char y,
		      char n)
{
  char	i;

  i = 0;
  while (i < 9)
    {
      RET_ONE_ZERO((grid[y][i] == n));
      i++;
    }
  return (1);
}

char	n_not_in_column(char grid[9][9],
			char x,
			char n)
{
  char	i;

  i = 0;
  while (i < 9)
    {
      RET_ONE_ZERO((grid[i][x] == n));
      i++;
    }
  return (1);
}

char	n_not_in_square(char grid[9][9],
			char y,
			char x,
			char n)
{
  char	i;
  char	py;
  char	px;

  //  (x > 5) ? (x = 6) : ((x > 2) ? (x = 3) : (x));
  //  (y > 5) ? (y = 6) : ((y > 2) ? (y = 3) : (y));
  x = x - (x % 3);
  y = y - (y % 3);
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
