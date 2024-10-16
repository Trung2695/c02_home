#include <stdlib.h>

int	ft_concat(char *dest, char *first, char *second, int l)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (first[i])
	{
		dest[l + i] = first[i];
		i++;
	}
	while (second[j])
	{
		dest[l + i + j] = second[j];
		j++;
	}
	return (i + j);
}

void	ft_final_concat(char *dest, char *src, int l)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

int	ft_total(int size, char **strs, char *sep)
{
	int	total;
	
	total = 0;
	if (size == 0)
		return (0);
	while (*strs)
	{
		total += ft_strlen(*strs);
		strs++;
	}
	total += ft_strlen(sep) * (size - 1);
	return (total);
}	

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*fin;
	int	total;
	int	track;
	int	i;

	total = ft_total(size, strs, sep);
	if (size == 0)
	{
		fin = malloc(sizeof(char) * 2);
		fin[0] = '\0';
		return (fin);
	}
	fin = malloc(total * sizeof(char) + 1);
	if (fin == NULL)
	{
		return (NULL);
	}
	track = 0;
	i = 0;
	while (i < size - 1)
	{
		track += ft_concat(fin, strs[i], sep, track);
		i++;
	}
	ft_final_concat(fin, strs[i], track);
	return (fin);
	
}

/*# include <stdio.h>
int	main(int argc, char **argv)
{
	char	*a = ft_strjoin(0, NULL, "a");
	printf("%s", a);
	printf("%d", ft_total(0, NULL, "a"));
}*/
