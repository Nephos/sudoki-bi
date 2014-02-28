/*
** get_next_line.c for  in /home/ghukas_g/rendu/CPE_2013_getnextline/new
**
** Made by ghukas_g
** Login   <ghukas_g@epitech.net>
**
** Started on  Wed Dec  4 15:33:44 2013 ghukas_g
** Last update Wed Dec  4 17:52:04 2013 ghukas_g
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"get_next_line.h"

static char	*my_cat_line(char *dest, char src[SIZE_BUFFER + 1],
			     int ind, int *start)
{
  char		*tmp;
  int		st;
  int		i;
  int		j;

  st = 0;
  i = -1;
  j = -1;
  if (dest != NULL)
    while (dest[st] != 0)
      st = st + 1;
  if ((tmp = malloc(st + ind + 1)) == NULL)
    return (NULL);
  while ((i = i + 1) < st)
    tmp[i] = dest[i];
  while ((j = j + 1) < ind)
    tmp[i + j] = src[*start + j];
  tmp[i + j] = 0;
  if (dest != NULL)
    free(dest);
  *start = *start + ind + 1;
  return (tmp);
}


char		*get_next_line(const int fd)
{
  static char	buff[SIZE_BUFFER + 1];
  static int	size;
  static int	start;
  int		ind;
  char		*line;

  line = NULL;
  ind = 0;
  while (1)
    {
      if (start >= size)
        {
	  start = 0;
	  if ((size = read(fd, buff, SIZE_BUFFER)) <= 0)
	    return (line);
	  ind = 0;
        }
      if (buff[start + ind] == '\n')
	return (my_cat_line(line, buff, ind, &start));
      if (start + ind == size - 1)
	line = my_cat_line(line, buff, ind + 1, &start);
      ind = ind + 1;
    }
}
