/*
** my.h for  in /home/poulet_a/projets/regex
** 
** Made by poulet_a
** Login   <poulet_a@epitech.eu>
** 
** Started on  Thu Dec 19 17:39:55 2013 poulet_a
** Last update Tue Feb  4 15:42:42 2014 poulet_a
*/

#ifndef MY_H_
# define MY_H_

# include <stdlib.h>

# define LONE			-1
# define ONE			1
# define ZERO			0

# define TWO_ZERO(i, j)		(i = (j = 0))
# define THREE_ZERO(i, j, k)	(i = (j = (k = 0)))
# define STREND(s, i)		while (s[i++])
# define FREE_AND_NULL(ptr)	if (ptr != NULL) free(ptr) ; (ptr = NULL)

# define RET_NULL_X(ptr, v)	if (ptr == NULL) return (v)
# define RET_NULL_NULL(ptr)	if (ptr == NULL) return (NULL)
# define RET_NULL_LONE(ptr)	if (ptr == NULL) return (LONE)
# define RET_NULL_ZERO(ptr)	if (ptr == NULL) return (ZERO)
# define RET_NULL_ONE(ptr)	if (ptr == NULL) return (ONE)

# define RET_LONE_X(ptr, v)	if (ptr == LONE) return (v)
# define RET_LONE_NULL(ptr)	if (ptr == LONE) return (NULL)
# define RET_LONE_LONE(ptr)	if (ptr == LONE) return (LONE)
# define RET_LONE_ZERO(ptr)	if (ptr == LONE) return (ZERO)
# define RET_LONE_ONE(ptr)	if (ptr == LONE) return (ONE)

# define RET_ONE_X(ptr, v)	if (ptr == ONE) return (v)
# define RET_ONE_NULL(ptr)	if (ptr == ONE) return (NULL)
# define RET_ONE_LONE(ptr)	if (ptr == ONE) return (LONE)
# define RET_ONE_ZERO(ptr)	if (ptr == ONE) return (ZERO)
# define RET_ONE_ONE(ptr)	if (ptr == ONE) return (ONE)

# define BUFF_LEN		2048

/*
** Uncategorized
*/
void		my_sleep(unsigned long t);

/*
** Memory
*/
void		*xmalloc(size_t size);
void		*my_catlloc(char *s1, char *s2);
char		*my_strdup(char *src);

/*
**Characters tests
*/
int		my_isin(const char c, const char *str);
int		my_isupper(const char c);
int		my_islower(const char c);
int		my_isalpha(const char c);
int		my_isnum(const char c);

/*
** Strings
*/
int		my_str_isalpha(const char *str);
int		my_str_islower(const char *str);
int		my_str_isnum(const char *str);
int		my_str_isprintable(const char *str);
int		my_str_isupper(const char *str);
int		my_strlen(const char *str);
char		**my_strsplit(char *str, const char sep);
char		*get_next_line(const int fd);
int		my_match(char *s1, char *s2);

/*
** Puts and displaying
*/
int		my_putchar(char c);
int		my_putchar_err(char c);
int		my_putc(int c);
int		my_putstr(char *str);
int		my_putnstr(char *str, int n);
int		my_put2str(char *s1, char *s2);
int		my_put3str(char *s1, char *s2, char *s3);
long		my_getnbr(char *str);
long		my_putnbr(long nbr);
long		my_putnbr_base(long nbr, char *base);
long		my_putnbr_base_s(long nbr, char *base);
unsigned long	my_putnbr_base_u(unsigned long nbr, char *base);

/*
** Environnements
*/
int		my_get_env(char *name, char **environ);

/*
** Lists
*/
typedef struct	s_list
{
  void		*e;
  struct s_list	*next;
  struct s_list	*prev;
}		t_list;

/*
** size : count the number of element in the list
** new : create a new element (list)
** create : create a new element in a list
** create_at_begin : same but at the begining
** last : gets the last element of a list
** index : gets the ID element in the list
*/
int		list_size(t_list *list);
t_list		*list_new(void *e, t_list *next, t_list *prev);
t_list		*list_create(t_list *list, void *e);
t_list		*list_create_at_begin(t_list *list, void *e);
t_list		*list_last(t_list *list);
t_list		*list_index(t_list *list, int id);
/*
** t_list		*my_list_init_from_tab(int size, void **tab);
*/

#endif /* !MY_H_ */
