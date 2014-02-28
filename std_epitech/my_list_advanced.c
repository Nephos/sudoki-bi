/*
** my_list_advanced.c for  in /home/poulet_a/projets/minishell1/src
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Thu Jan 16 09:21:16 2014 poulet_a
** Last update Sat Feb  1 16:03:58 2014 poulet_a
*/

#include "my.h"

/*
** TODO : check if works
*/
t_list		*list_index(t_list *list, int id)
{
  t_list	*tmp;
  int		i;

  if (list == NULL)
    return (NULL);
  tmp = list;
  i = 0;
  while (i < id && tmp != NULL)
    {
      i++;
      tmp = tmp->next;
    }
  return (tmp);
}

/*
** TODO : check if works and segfault
*/
t_list		*list_init_from_tab(int size, void **tab)
{
  t_list	*dynlist;
  int		i;
  t_list	*save;

  RET_NULL_NULL(tab);
  i = 0;
  dynlist = malloc(sizeof(t_list*) * (size + 1));
  RET_NULL_NULL(dynlist);
  save = dynlist;
  dynlist->next = list_new(NULL, NULL, NULL);
  while (i < size && tab[i])
    {
      RET_NULL_NULL(dynlist);
      dynlist->next = list_new(my_strdup(tab[i]), NULL, dynlist);
      dynlist = dynlist->next;
      i++;
    }
  dynlist = save->next;
  return (dynlist);
}
