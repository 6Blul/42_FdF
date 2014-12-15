/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 04:59:22 by spochez           #+#    #+#             */
/*   Updated: 2014/12/15 23:09:58 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

typedef struct		s_coor
{
	double 		x;
	double 		y;
	double 		z;
}					t_coor;

void	treat_nbr(char *file);

#endif
