#include "fdf.h"

int		**ft_getnbr(int fd)
{
	char	*line;
	int		**tab;
	int		x;

	x = 0;
	tab = (int **)malloc(sizeof(int *));
	while (get_next_line(fd, &line) > 0)
	{
		tab = ft_realloctab(tab, x);
		printf("line = %s\n", line);
		tab[x] = ft_splitnbrs(line);
		x++;
	}
	return (tab);
}

int		main(int ac, char **av)
{
	int		**tab;
	int		fd;
	
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		tab = ft_getnbr(fd);
		ft_fdf(tab);
	}
	else
		ft_putstr("Rien a lire.\n");
	return (0);
}
