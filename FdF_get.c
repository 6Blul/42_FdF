/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FdF_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/13 02:50:39 by spochez           #+#    #+#             */
/*   Updated: 2014/12/13 04:33:18 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>
#include <fcntl.h>
#include "fdf.h"

void	get_coors(char **split, t_coor ****tab)
{
	int		i;

	i = 0;
	while (split[i])
	{
		tab[y][x]->y = i;
		tab->z = ft_atoi(*tab[x][y]);
		*tab++;
		i++;
	}
	return (res);
}

void	get_nbr(const int fd, t_coor ****tab)
{
	char	*buff;
	char	**split;

	tab->x = 0;
	while (get_next_line(fd, &buff) > 0)
	{
		split = ft_strsplit(buff);
		get_coors(split, &tab);
		**tab++;
		tab->x++;
	}
}

t_coor	***treat_nbr(char *file)
{
	const int	fd;
	t_coor		***tab;

	fd = open(file, O_RDONLY);
	get_nbr(fd, &tab);
}
