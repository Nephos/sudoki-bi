/*
** read_grid.h for  in /home/poulet_a/projets/sudoki-bi/src
** 
** Made by poulet_a
** Login   <poulet_a@epitech.net>
** 
** Started on  Sun Mar  2 15:02:56 2014 poulet_a
** Last update Sun Mar  2 15:06:55 2014 poulet_a
*/

#ifndef READ_GRID_H_
# define READ_GRID_H_

# define IS_NUM(nb)	(((nb) < '0' || (nb) > '9') ? (-1) : (0))

void	aff_grid(char grid[9][9], int i);
char	read_grid(char tab[9][9]);
void	aff_grid(char grid[9][9], int i);
char	check_line(char *line, char tab[9]);

#endif /* !READ_GRID_H_ */
