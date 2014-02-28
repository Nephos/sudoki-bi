/*
** elementary.h for  in /home/poulet_a/projets/sudoki-bi/src
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Fri Feb 28 22:15:36 2014 poulet_a
** Last update Fri Feb 28 22:16:27 2014 poulet_a
*/

#ifndef ELEMENTARY_H_
# define ELEMENTARY_H_

unsigned char	n_not_one_line(unsigned char grid[9][9],
			       unsigned char line,
			       unsigned char n);
unsigned char	n_not_one_column(unsigned char grid[9][9],
				 unsigned char col,
				 unsigned char n);
unsigned char	n_not_one_square(unsigned char grid[9][9],
				 unsigned char x,
				 unsigned char y,
				 unsigned char n);

#endif /* !ELEMENTARY_H_ */
