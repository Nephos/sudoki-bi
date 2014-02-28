/*
** elementary.h for  in /home/poulet_a/projets/sudoki-bi/src
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Fri Feb 28 22:15:36 2014 poulet_a
** Last update Sat Mar  1 00:02:15 2014 poulet_a
*/

#ifndef ELEMENTARY_H_
# define ELEMENTARY_H_

char	n_not_in_line(char grid[9][9],
		      char y,
		      char n);
char	n_not_in_column(char grid[9][9],
			char x,
			char n);
char	n_not_in_square(char grid[9][9],
			char y,
			char x);
char	n_valid(char grid[9][9],
		char y,
		char x,
		char n);

#endif /* !ELEMENTARY_H_ */
