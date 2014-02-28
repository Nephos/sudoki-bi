/*
** elementary.c for  in /home/poulet_a/projets/sudoki-bi/src
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Fri Feb 28 21:55:42 2014 poulet_a
** Last update Fri Feb 28 23:48:13 2014 poulet_a
*/

unsigned char	n_not_in_line(unsigned char grid[9][9],
			      unsigned char y,
			      unsigned char n)
{
  unsigned char	i;

  i = 0;
  while (i < 9)
    {
      RET_ONE_ZERO(grid[y][i] == n);
      i++;
    }
  return (1);
}

unsigned char	n_not_in_column(unsigned char grid[9][9],
				unsigned char x,
				unsigned char n)
{
  unsigned char	i;

  i = 0;
  while (i < 9)
    {
      RET_ONE_ZERO(grid[i][x] == n);
      i++;
    }
  return (1);
}

unsigned char	n_not_in_square(unsigned char grid[9][9],
				unsigned char y,
				unsigned char x,
				unsigned char n)
{
  unsigned char	i;
  unsigned char	py;
  unsigned char	px;

  y = y % 9;
  x = x / 9;
  py = y;
  px = x;
  i = 0;
  while (i < 9)
    {
      py = y + i / 3;
      px = x + i % 3;
      RET_ONE_ZERO(grid[py][px] == n);
      i++;
    }
  return (1);
}

unsigned char	n_valid(unsigned char grid[9][9],
			unsigned char y,
			unsigned char x,
			unsigned char n)
{
  if (n_not_in_square(grid, y, x, n)
      && n_not_in_line(grid, y, n)
      && n_not_in_column(grid, x, n))
    return (1);
  return (0);
}
