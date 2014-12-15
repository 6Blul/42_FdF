/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FdF_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/13 02:50:39 by spochez           #+#    #+#             */
/*   Updated: 2014/12/15 22:30:46 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "fdf.h"
#include "../Libft/includes/libft.h"

void	get_nbr(int fd)
{
	t_coor	**pts;
	char	*buff;
	char	**split;
	int		i;
	int		j;

	pts = NULL;
	i = 0;
	while (get_next_line(fd, &buff) > 0)
	{
		j = 0;
		pts[i][j].x = i;
		split = ft_strsplit(buff, ' ');
		while (split[j])
		{
			pts[i][j].y = j;
			pts[i][j].z = ft_atoi(split[j]);
			j++;
		}
		i++;
	}
}

void	treat_nbr(char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	get_nbr(fd);
}
