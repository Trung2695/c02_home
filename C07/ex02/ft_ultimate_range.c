#include <stdlib.h>
//#include <stdio.h>

int     *ft_range(int min, int max)
{
        int     *out;
        int     i;

        i = 0;
        if (min >= max)
                return (NULL);
        out = malloc(sizeof(int) * (max - min));
        if (out == NULL)
                return (NULL);
        while (min + i < max)
        {
                out[i] = i + min;
                i++;
        }
        return (out);
}

int	ft_ultimate_range(int **range, int min, int max)
{

	*range = ft_range(min, max);
	if (range == NULL)
		return (0);
	else
		return(max-min);
}

/*
int	main(void)
{
	int	**range = NULL;
	int	i = 0;

	while (range[i]);
	{
		printf("%s", range[i]);
		i++;
	}
}*/
