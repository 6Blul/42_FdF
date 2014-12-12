/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 04:59:22 by spochez           #+#    #+#             */
/*   Updated: 2014/12/12 23:29:59 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Il est si sympa que vous n'en reviendrez pas votre ami Pitty le Panda

#ifndef FDF_H
# define FDF_H

typedef struct		s_coor
{
	double 		x;
	double 		y;
	double 		z;
}					t_coor;

typedef struct		s_con
{
	static int	i;
	static int	j;
}					t_con;

t_pd	***get_nbr(int fd);
void	treat_nbr(char *file);

#endif
