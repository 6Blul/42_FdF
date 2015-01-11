/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 07:25:57 by spochez           #+#    #+#             */
/*   Updated: 2015/01/11 07:47:53 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_coor	**ft_getnbr(char *file)
{
	t_coor	**pts;
	char	**sp;
	char	**nbs;
	int		i;
	int		j;

	i = 0;
	j = 0;
	sp = ft_strsplit(file, '\n');
	while (sp[i])
	{
		nbs = ft_strsplit(sp[i], ' ');
		while (nbs[j])
		{
			pts.x = i;
			pts.y = j;
			pts.z = ft_atoi(nbs[j]);
			j++;
		}
		i++;
		j = 0;
	}
	return (pts);
}
