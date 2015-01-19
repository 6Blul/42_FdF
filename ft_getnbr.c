/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 07:25:57 by spochez           #+#    #+#             */
/*   Updated: 2015/01/19 09:47:26 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_coor	**ft_getnbr(char *line, int nb)
{
	t_coor	**pts;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (line[j])
	{
		pts.x = nb;
		pts.y = j;
		pts.z = ft_atoi(line[j]);
	}
	return (pts);
}
