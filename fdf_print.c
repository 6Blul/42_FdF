/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 03:43:18 by spochez           #+#    #+#             */
/*   Updated: 2014/12/16 04:00:03 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "fdf.h"
#include "Libft/includes/libft.h"

void	print_window(t_coor ****pts, t_winsize *sze)
{
	void	*mlx_ptr;
	void	*win_ptr;
	s_coun	prin;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(&mlx_ptr, sze->x, sze->y, "Test mlx");
	i = 0;
	while (i < sze->x && j < sze->y)
	{
		j = 0;
		while (pts[j])
		{
			mlx_pixel_put(&mlx_ptr, &win_ptr, pts[i][j]->x, pts[i][j]->y);
			j++;
		}
		i++;
	}
}
