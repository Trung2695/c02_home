#include <stdlib.h>
#include <stdio.h>
//typedef struct	s_stock_str
//{
//int	size;
//char	*str;
//char	*cpy;
//}		t_stock_str;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*a;
	int		i;

	i = 0;
	a = malloc(sizeof(t_stock_str) * (ac + 1));
	if (a == NULL)
		return NULL;
	while (i < ac)
	{
		a[i] = (t_stock_str) {.size = ft_strlen(av[i]), .str = av[i], .copy = NULL};
		a[i].copy = malloc(sizeof(char) * ft_strlen(av[i]) + 1);
		if (a[i].copy == NULL)
			return NULL;
		ft_strcpy(a[i].copy, av[i]);
		i++;
	}
	a[i] = (t_stock_str) {0};
	return (a);

}
