/*
** ret.h for  in /home/poulet_a/projets/sudoki-bi/src
**
** Made by poulet_a
** Login   <poulet_a@epitech.net>
**
** Started on  Fri Feb 28 21:23:14 2014 poulet_a
** Last update Sun Mar  2 20:25:19 2014 poulet_a
*/

#ifndef RET_H_
# define RET_H_

# define LONE			-1
# define ONE			1
# define ZERO			0

# define TWO_ZERO(x, y)		(x = (y = (0)))

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

#endif /* !RET_H_ */
