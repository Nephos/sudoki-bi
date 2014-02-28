/*
** my_str_isin.c for  in /home/poulet_a/projets/regex
** 
** Made by poulet_a
** Login   <poulet_a@epitech.eu>
** 
** Started on  Thu Dec 19 15:07:47 2013 poulet_a
** Last update Wed Jan 29 12:57:48 2014 poulet_a
*/

#include "regex.h"

int	my_isin(const char c, const char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == c)
	return (i);
      i++;
    }
  return (-1);
}

int	my_isupper(const char c)
{
  return (my_isin(c, "AZERTYUIOPQSDFGHJKLMWXCVBN"));
}

int	my_islower(const char c)
{
  return (my_isin(c, "azertyuiopqsdfghjklmwxcvbn"));
}

int	my_isalpha(const char c)
{
  return ((my_isupper(c) == -1)?(-1):(my_islower(c)));
}

int	my_isnum(const char c)
{
  return (my_isin(c, "1234567890"));
}
