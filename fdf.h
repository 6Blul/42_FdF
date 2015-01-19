/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 04:59:22 by spochez           #+#    #+#             */
/*   Updated: 2015/01/19 09:37:50 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define BUFF_SIZE 12

typedef struct		s_coor
{
	double 		x;
	double 		y;
	double 		z;
}					t_coor;

t_coor				**ft_getnbr(char *file);

#endif
