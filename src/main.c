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

char			**read_grille();

int		main()
{
  char		**tab;

  if ((tab = read_grille()) == NULL)
    return (-1);
  return (0);
}
