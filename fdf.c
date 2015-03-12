#include "fdf.h"

void	ft_fdf(int **tab)
{
	void	*mlx_ptr;
	void	*win_ptr;
	int 	x;
	int 	y;
	int 	z;
	int 	gx;
	int 	gy;
	/*int 	tp;
	int  	tp2;

	tp = 0;
	while(tab[tp])
	{
		tp2 = 0;
		while (tab[tp][tp2])
		{
			printf("%i\n", tab[tp][tp2]);
			tp2++;
		}
		tp++;
	}*/
	x = 0;
	(void)tab;
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 1000, 1000, "pd");
	while (tab[x])
	{
		y = 0;
		while (tab[y])
		{
			gx = (cte1 * (x * 20)) - (cte2 * (y * 20));
			z = tab[x][y];
			gy = (cte1 / 2 * (x * 20)) + (cte2 / 2 * (y * 20)) - z;
			mlx_pixel_put(mlx_ptr, win_ptr, gx + 200, gy + 200, 0xCCCCCC);
			y++;
		}
		x++;
	}
  	mlx_loop(mlx_ptr); 
}