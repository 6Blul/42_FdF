/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 04:59:22 by spochez           #+#    #+#             */
/*   Updated: 2014/12/16 04:10:02 by spochez          ###   ########.fr       */
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

typedef struct		s_coun
{
	int			i;
	int			j;
}					t_coun;

typedef struct		s_winsize
{
	int			x;
	int			y;
}					t_winsize;

void	treat_nbr(char *file);
void	print_window(t_coor ***pts, t_winsize *sze);

#endif
