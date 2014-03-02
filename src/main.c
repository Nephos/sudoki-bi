/*
** main.c for  in /home/poulet_a/projets/sudoki-bi
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Fri Feb 28 20:16:09 2014 poulet_a
** Last update Sun Mar  2 15:33:43 2014 poulet_a
*/

#include <stdlib.h>
#include <stdio.h>
#include "ret.h"
#include "get_next_line.h"
#include "solve.h"
#include "read_grid.h"

int	main()
{
  char	tab[9][9];
  char	ret;
  char	ret_read;
  int	i;

  i = 0;
  ret_read = 0;
  while (ret_read != 42)
    {
      if ((ret_read = read_grid(tab)) == -1)
	return (-1 + i);
      if (ret_read != 42)
	{
	  ret = valid_grid(tab, 0, 0);
	  if (ret)
	    aff_grid(tab, i);
	  else
	    printf("Grille invalide\n");
	  i = 1;
	}
    }
  if (ret^1)
    printf("Erreur durant la lecture de la grille\n");
  return (ret^1);
}
