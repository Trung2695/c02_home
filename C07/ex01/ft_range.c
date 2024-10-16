#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*out;
	int	i;

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
