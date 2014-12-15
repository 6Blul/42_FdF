/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FdF_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/13 02:50:39 by spochez           #+#    #+#             */
/*   Updated: 2014/12/15 01:38:21 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "fdf.h"
#include "../Libft/includes/libft.h"


void	fill_struct(char **split, t_coor ****pts)
{
	int		i;

	i = 0;
	while (split[i])
	{
		pts->z = ft_atoi(split[i]);
		pts->y = i;
		i++;
	}
}

void	get_nbr(int fd)
{
	t_coor	***pts;
	char	*buff;
	char	**split;

	pts.x = 0;
	while (get_next_line(fd, &buff) > 0)
	{
		split = ft_strsplit(buff, ' ');
		fill_struct(split, &pts);
		pts.x++;
	}
}

void	treat_nbr(char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	get_nbr(fd);
}
