/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 06:52:58 by amerle            #+#    #+#             */
/*   Updated: 2015/01/22 06:52:59 by amerle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include <unistd.h>

typedef struct s_vector	t_vector;

struct		s_vector
{
	void	**ptr;
	size_t	size;
	size_t	reserve;
};

t_vector	*ft_vector_new(void);
t_vector	*ft_vector_newr(size_t reserve);
t_vector	*ft_vector_push(t_vector *v, void *data);
t_vector	*ft_vector_erase(t_vector *v, size_t index);
t_vector	*ft_vector_clear(t_vector *v);
t_vector	*ft_vector_clearfree(t_vector *v, void (*freefunc)());
void		ft_vector_del(t_vector *v);
void		ft_vector_delptr(t_vector **ptr);
void		ft_vector_sort(t_vector *v, int (*cmp)());

#endif
