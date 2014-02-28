/*
** list.c for  in /home/poulet_a/projets/select
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Thu Jan 16 09:03:09 2014 poulet_a
** Last update Tue Feb  4 15:43:05 2014 poulet_a
*/

#include <stdlib.h>
#include "my.h"

int		list_size(t_list *list)
{
  t_list	*tmp;
  int		size;

  if (list == NULL)
    return (-1);
  tmp = list;
  size = 0;
  while (tmp != NULL)
    {
      size++;
      tmp = tmp->next;
    }
  return (size);
}

t_list		*list_new(void *e, t_list *next, t_list *prev)
{
  t_list	*list;

  list = malloc(sizeof(t_list));
  RET_NULL_NULL(list);
  list->e = e;
  list->next = next;
  list->prev = prev;
  return (list);
}

t_list		*list_create(t_list *list, void *e)
{
  t_list	*tmp;

  tmp = list_last(list);
  if (tmp == NULL)
    return (list = list_new(e, NULL, NULL));
  tmp->next = list_new(e, NULL, tmp);
  return (list);
}

t_list		*list_create_at_begin(t_list *list, void *e)
{
  t_list	*tmp;

  if (list == NULL)
    return (list = list_new(e, NULL, NULL));
  tmp = list_new(e, list, NULL);
  return (list = tmp);
}

t_list		*list_last(t_list *list)
{
  t_list	*tmp;

  RET_NULL_NULL(list);
  tmp = list;
  while (tmp->next != NULL)
    {
      tmp = tmp->next;
    }
  return (tmp);
}
