#include "fdf.h"

int		ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int		*ft_splitnbrs(char *s)
{
	int		x;
	int		*res;
	int		i;

	i = 0;
	x = 0;
	res = (int *)malloc(sizeof(int));
	while (s[i])
	{
		printf("nod = [%c]\n", s[i]);
		if (ft_isdigit(s[i]))
		{
			printf("dg = [%c]\n", s[i]);	
			res = ft_realloctabline(res, x);
			res[x] = ft_atoi(s);
			printf("Res[x] = [%i]\n", res[x]);
			x++;
			while (ft_isdigit(s[i]) && s[i])
			{
				printf("nodg = [%c]\n", s[i]);	
				i++;
			}
		}
		i++;
	}
	printf("ENDRES\n");
	return (res);
}