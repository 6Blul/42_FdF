#include "fdf.h"

int		*ft_realloctabline(int *tab, int x)
{
	int		i;
	int		*res;

	res = (int *)malloc(sizeof(int) * (x + 1));
	i = 0;
	while (i < x)
	{
		res[i] = tab[i];
		i++;
	}
	return (res);
}

int		**ft_realloctab(int **tab, int x)
{
	int		i;
	int		j;
	int		**res;

	printf("pd1\n");
	res = (int **)malloc(sizeof(int *) * (x + 1));
	i = 0;
	while (i < x)
	{
		j = 0;
		while (tab[i][j])
			j++;
		res[i] = ft_realloctabline(tab[i], j);
		i++;
	}
	printf("pd2\n");
	return (res);
}