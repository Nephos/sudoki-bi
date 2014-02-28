/*
** elementary.h for  in /home/poulet_a/projets/sudoki-bi/src
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Fri Feb 28 22:15:36 2014 poulet_a
** Last update Fri Feb 28 23:48:42 2014 poulet_a
*/

#ifndef ELEMENTARY_H_
# define ELEMENTARY_H_

unsigned char	n_not_in_line(unsigned char grid[9][9],
			      unsigned char y,
			      unsigned char n);
unsigned char	n_not_in_column(unsigned char grid[9][9],
				unsigned char x,
				unsigned char n);
unsigned char	n_not_in_square(unsigned char grid[9][9],
				unsigned char y,
				unsigned char x);
unsigned char	n_valid(unsigned char grid[9][9],
			unsigned char y,
			unsigned char x);

#endif /* !ELEMENTARY_H_ */
