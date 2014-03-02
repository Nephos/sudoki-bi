/*
** elementary.c for  in /home/poulet_a/projets/sudoki-bi/src
**
** Made by poulet_a
** Login   <poulet_a@epitech.net>
**
** Started on  Fri Feb 28 21:55:42 2014 poulet_a
** Last update Sun Mar  2 16:09:58 2014 poulet_a
*/

#include "ret.h"

char	n_not_in_line(char grid[9][9],
		      char y,
		      char n)
{
  char	i;
  char	occ;

  i = 0;
  occ = 0;
  while (i < 9)
    {
      if (grid[y][i] == n)
	occ++;
      i++;
    }
  return (occ);
}

char	n_not_in_column(char grid[9][9],
			char x,
			char n)
{
  char	i;
  char	occ;

  i = 0;
  occ = 0;
  while (i < 9)
    {
      if (grid[y][i] == n)
	occ++;
      i++;
    }
  return (occ);
}

char	n_not_in_square(char grid[9][9],
			char y,
			char x,
			char n)
{
  char	i;
  char	py;
  char	px;
  char	occ;

  x = x - x % 3;
  y = y - y % 3;
  px = x;
  py = y;
  i = 0;
  occ = 0;
  while (i < 9)
    {
      py = y + i / 3;
      px = x + i % 3;
      if (grid[py][px] == n)
	occ++;
      i++;
    }
  return (occ);
}

char	n_valid(char grid[9][9],
		char y,
		char x,
		char n)
{
  return (n_not_in_square(grid, y, x, n)
	  + n_not_in_line(grid, y, n)
	  + n_not_in_column(grid, x, n));
}
