/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FdF_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 05:27:49 by spochez           #+#    #+#             */
/*   Updated: 2014/12/13 00:57:39 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <mlx.h>
#include <stdlib.h>

t_coor	***get_nbr(int fd)
{
	char			*oui;
	static char		**split;
	t_coor			***pt;
	t_con			tent;

	if (tent.j == 0)
	{
		get_next_line(fd, &oui);
		split = ft_strsplit(oui, ' ');
	}
	if (oui == NULL)
	{
		pt = NULL;
		return (pt);
	}
	pt.x = tent.i;
	pt.z = ft_atoi(split[tent.j]);
	pt.y = tent.j;
	if (!split[tent.j + 1])
	{
		tent.j = 0;
		tent.i++;
	}
	else
		tent.j++;
	return (pt);
}

void	treat_nbr(char *file)
{
	int			fd;
	t_coor		***pt;

	fd = open(file, O_RDONLY);
	while (pt != NULL)
	{
		pt = get_nbr(fd);
	}
}
