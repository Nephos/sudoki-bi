/*
** my_power.c for  in /home/poulet_a/projets/wolf3d/src
** 
** Made by poulet_a@epitech.eu
** Login   <poulet_a@epitech.net>
** 
** Started on  Wed Jan  8 16:24:44 2014 poulet_a@epitech.eu
** Last update Wed Jan  8 16:25:33 2014 poulet_a@epitech.eu
*/

long	my_pow(long n, long e)
{
  while (e--)
    n *= n;
  return (n);
}
