#include "fdf.h"

int		ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int		*ft_splitnbrs(char *s)
{
	int		x;
	int		*res;

	x = 0;
	res = (int *)malloc(sizeof(int));
	while (*s)
	{
		if (ft_isdigit(*s))
		{
			res = ft_realloctabline(res, x);
			res[x] = ft_atoi(s);
			x++;
			while (ft_isdigit(*s) && *s)
				s++;
		}
		s++;
	}
	return (res);
}