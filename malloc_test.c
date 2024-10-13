#include <stdlib.h>
#include <unistd.h>
void	ft_print(char **list)
{
	int	i = 0;
	int	j = 0;
	char	a = '\n';
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			write(1, &list[j][i], 1);
			i++;
		}
		j++;
		write(1, &a, 1);
	}

}

void	ft_test(char	**a)
{
	int	i = 0;
	int	j = 0;

	while (i < 4)
	{
		j = 0;
		//a[i] = "0000";
		//above is read-only`
		while (j < 4)
		{
			a[i][j]= '0';
			j++;
		}
		i++;
	}
}

void	ft_parse_input(char *input, char **a)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if ('0' <= *input && *input <= '9')
			{
				a[i][j] = *input;
				j++;
			}
			input++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	**a;
	a = malloc(sizeof(char*) * 4 + 1);
	a[0] = malloc(5);
	a[1] = malloc(5);
	a[2] = malloc(5);
	a[3] = malloc(5);
	ft_parse_input(argv[1], a);
	ft_print(a);
}
