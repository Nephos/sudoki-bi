/*
** my_get_env.c for  in /home/poulet_a/projets/allum1-2018-poulet_a
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Tue Feb  4 10:06:25 2014 poulet_a
** Last update Tue Feb  4 10:28:51 2014 poulet_a
*/

#include <stdlib.h>
#include "my.h"

/*
** for the exemple, name will be = "TERM"
** the check is only executed for environ which have more than6chars(TERM=x)
** it is return the value of the variable
*/
int	my_get_env(char *name, char **environ)
{
  int	i;
  char	*tmp;

  RET_NULL_LONE(environ);
  RET_NULL_LONE(name);
  i = 0;
  while (environ[i])
    {
      if (my_strlen(environ[i]) >= my_strlen(name) + 2)
	{
	  tmp = my_strdup(environ[i]);
	  RET_NULL_LONE(tmp);
	  tmp[4] = 0;
	  if (my_match(tmp, name))
	    {
	      free(tmp);
	      return (i);
	    }
	  free(tmp);
	}
      i++;
    }
  return (LONE);
}
