/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 03:43:18 by spochez           #+#    #+#             */
/*   Updated: 2014/12/16 04:24:45 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "fdf.h"
#include "Libft/includes/libft.h"

void	print_window(t_coor ***pts, t_winsize *sze)
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_coun	prin;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, sze->x, sze->y, "Test mlx");
	prin.i = 0;
	while (prin.i < sze->x && prin.j < sze->y)
	{
		prin.j = 0;
		while (pts[prin.j])
		{
			mlx_pixel_put(mlx_ptr, win_ptr, pts[prin.i][prin.j]->x, pts[prin.i][prin.j]->y, 0x00FF00); 
			prin.j++;
		}
		prin.i++;
	}
}
