/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spochez <spochez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 09:33:51 by spochez           #+#    #+#             */
/*   Updated: 2015/01/19 09:47:28 by spochez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int ac, char **av)
{
	int		i;
	int		nb;
	int		fd;
	t_coor	**pts;

	i = 1;
	if (ac == 1)
		ft_putstr("J'ai rien a lire !");
	else if (ac >= 1)
	{
		while (i <= ac)
		{
			nb = 0;
			fd = open(av[i], O_RDONLY);
			while (get_next_line(fd, &line) > 0)
			{
				pts = ft_getnbr(line, nb);
				nb++;
			}
		}
	}
	return (0);
}
