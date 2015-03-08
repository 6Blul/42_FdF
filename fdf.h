#ifndef FDF_H
# define FDF_H
# define cte1 0.8
# define cte2 0.6

#include <stdio.h>
#include <stdlib.h>
#include <mlx.h>
#include <math.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_fdf(int **tab);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *s1);
size_t		ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
int		get_next_line(int const fd, char **line);

#endif