/*
** get_next_line.c for  in /home/poulet_a/projets/get_next_line
** 
** Made by poulet_a
** Login   <poulet_a@epitech.eu>
** 
** Started on  Thu Dec 19 16:58:50 2013 poulet_a
** Last update Tue Jan 14 12:48:30 2014 poulet_a
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

/*
** Alloc a new str with the first line
*/
char	*get_first_line(char *str)
{
  char	*out;
  int	i;
  int	imax;

  imax = my_strlen(str);
  if (imax < 0)
    return (NULL);
  i = my_isin('\n', str);
  if (i < 0)
    return (str);
  str[i] = 0;
  out = my_strdup(str);
  str[i] = '\n';
  return (out);
}

char	*my_catlloc_gnl(char *save, char *buff)
{
  char	*out;

  if (save == NULL || buff == NULL)
    return (NULL);
  out = my_catlloc(save, buff);
  free(save);
  return (out);
}

/*
** remove first line of str
** and realloc the others and return
*/
char	*remove_first_line(char *str)
{
  char	*out;
  int	i;
  int	imax;

  imax = my_strlen(str);
  if (imax < 0)
    return (NULL);
  i = my_isin('\n', str);
  if (i < 0)
    i = my_strlen(str);
  out = my_strdup(str + i + 1);
  free(str);
  return (out);
}

/*
** check if save is not initialized OR if it's the end
** then continue
*/
char		*get_next_line(const int fd)
{
  static int	read_size = BUFF_LEN;
  char		buff[BUFF_LEN + 1];
  static char*	save = NULL;
  char		*out;

  if (save == NULL && read_size == BUFF_LEN)
    save = malloc(0);
  RET_NULL_NULL(save);
  if (my_isin('\n', save) != -1
      && ((out = get_first_line(save)) != save)
      && ((save = remove_first_line(save)) != out))
    return (out);
  while (read_size > 0)
    {
      if ((read_size = read(fd, &buff, BUFF_LEN)) == -1)
	return (NULL);
      buff[read_size] = 0;
      save = my_catlloc_gnl(save, buff);
      if ((my_isin('\n', buff) != -1 && !my_strlen(buff) < BUFF_LEN)
	  && ((out = get_first_line(save)) || 1)
	  && ((save = remove_first_line(save)) || 1))
	return (out);
    }
  return (NULL);
}
