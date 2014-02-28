/*
** my_strlowcase.c for  in /home/poulet_a/tmp-rendu/Piscine-C-Jour_06
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Mon Oct  7 18:55:29 2013 poulet_a
** Last update Wed Oct  9 10:25:14 2013 poulet_a
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 65 && str[i] <= 90)
	str[i] = str[i] + 32;
    }
  return (str);
}
