#include "fdf.h"

int		main(void)
{
	int		**tab;

	tab = (int **)malloc(sizeof(int *) * 6);
	tab[0] = (int *)malloc(sizeof(int) * 6);
	tab[1] = (int *)malloc(sizeof(int) * 6);
	tab[2] = (int *)malloc(sizeof(int) * 6);
	tab[3] = (int *)malloc(sizeof(int) * 6);
	tab[4] = (int *)malloc(sizeof(int) * 6);
	tab[0][0] = 0;
	tab[0][1] = 0;
	tab[0][2] = 10;
	tab[0][3] = 0;
	tab[0][4] = 0;
	tab[1][0] = 0;
	tab[1][1] = 0;
	tab[1][2] = 10;
	tab[1][3] = 0;
	tab[1][4] = 0;
	tab[2][0] = 0;
	tab[2][1] = 0;
	tab[2][2] = 10;
	tab[2][3] = 0;
	tab[2][4] = 0;
	tab[3][0] = 0;
	tab[3][1] = 0;
	tab[3][2] = 10;
	tab[3][3] = 0;
	tab[3][4] = 0;
	tab[4][0] = 0;
	tab[4][1] = 0;
	tab[4][2] = 10;
	tab[4][3] = 0;
	tab[4][4] = 0;
	ft_fdf(tab);
	return (0);
}
