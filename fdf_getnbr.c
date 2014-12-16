/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_getnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 04:06:50 by spochez           #+#    #+#             */
/*   Updated: 2014/12/16 04:45:03 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "fdf.h"
#include "Libft/includes/libft.h"

void	get_nbr(int fd)
{
	t_coor		**pts;
	char		*buff;
	char		**split;
	t_coun		id;
	t_winsize	sze;

	pts = NULL;
	id.i = 0;
	while (get_next_line(fd, &buff) > 0)
	{
		id.j = 0;
		pts[id.i][id.j].x = id.i;
		split = ft_strsplit(buff, ' ');
		while (split[id.j])
		{
			pts[id.i][id.j].y = id.j;
			pts[id.i][id.j].z = ft_atoi(split[id.j]);
			id.j++;
		}
		id.i++;
		sze.x = id.i;
		sze.y = id.j;
	}
	print_window(&pts, &sze);
}

void	treat_nbr(char *file)
{
	int			fd;

	fd = open(file, O_RDONLY);
	get_nbr(fd);
}
