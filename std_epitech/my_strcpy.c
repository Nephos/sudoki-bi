/*
** my_strcpy.c for  in /home/poulet_a/tmp-rendu/Piscine-C-Jour_06
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Mon Oct  7 09:08:09 2013 poulet_a
** Last update Thu Nov  7 11:56:12 2013 poulet_a
*/

/*
** dest must has the good size
*/
char	*my_strcpy(char **dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      *dest[i] = src[i];
      i = i + 1;
    }
  return (*dest);
}
