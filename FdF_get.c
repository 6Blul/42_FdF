/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FdF_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 05:27:49 by spochez           #+#    #+#             */
/*   Updated: 2014/12/11 06:26:02 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdlib.h>

t_pd	***get_nbr(char *file)
{
	char			*oui;
	char			**gato;
	struct	t_pd	***cake;
	struct	t_con	tent;
	int				fd;

	tent.i = 1;
	tent.j = 0;
	fd = open(file, O_RDONLY);
	while (get_next_line(fd, &oui) > 0)
	{
		cake.x = tent.i;
		tent.i++;
		gato = ft_strsplit(&oui, ' ');
		while (*gato)
		{
				
		}
	}
}
