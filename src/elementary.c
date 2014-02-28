/*
** elementary.c for  in /home/poulet_a/projets/sudoki-bi/src
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Fri Feb 28 21:55:42 2014 poulet_a
** Last update Fri Feb 28 22:13:25 2014 poulet_a
*/

unsigned char	n_not_one_line(unsigned char grid[9][9],
			       unsigned char line,
			       unsigned char n)
{
  unsigned char	i;

  i = 0;
  while (i < 9)
    {
      RET_ONE_ZERO(grid[line][i] == n);
      i++;
    }
  return (1);
}

unsigned char	n_not_one_column(unsigned char grid[9][9],
				 unsigned char col,
				 unsigned char n)
{
  unsigned char	i;

  i = 0;
  while (i < 9)
    {
      RET_ONE_ZERO(grid[i][col] == n);
      i++;
    }
  return (1);
}

unsigned char	n_not_one_square(unsigned char grid[9][9],
				 unsigned char x,
				 unsigned char y,
				 unsigned char n)
{
  unsigned char	i;
  unsigned char	px;
  unsigned char	py;

  x = x / 9;
  y = y % 9;
  px = x;
  py = y;
  i = 0;
  while (i < 9)
    {
      px = x + i % 3;
      py = y + i / 3;
      RET_ONE_ZERO(grid[px][py] == n);
      i++;
    }
  return (1);
}

