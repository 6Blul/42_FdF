/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 04:59:22 by spochez           #+#    #+#             */
/*   Updated: 2014/12/13 04:30:59 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Il est si sympa que vous n'en reviendrez pas votre ami Pitty le Panda
//Quand mon programme y marche pas... ca me rend treeeees triste.

#ifndef FDF_H
# define FDF_H

typedef struct		s_coor
{
	double 		x;
	double 		y;
	double 		z;
}					t_coor;

t_coor	***get_nbr(const int fd);
void	treat_nbr(char *file);

#endif
