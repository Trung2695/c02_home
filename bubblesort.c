/*Implementing bubble sort for char** 
 */
#include <unistd.h>

void	func_write(char	*a)
{
	char	b;

	b = '\n';
	while (*a)
	{
		write(1, a, 1);
		a++;
	}
	write(1, &b, 1);
}

int	func_compare(char* a, char*b)
{
	while (*a && *b && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	func_swap(char **a, char **b)
{
	char	*temp;


	temp = *a;
	*a = *b;
	*b = temp;
}

void	func_sort(char	**a, int	b)
{
	//b is the number of items to sort in char** a
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (1 < b - i)
	{
		j = 0;
		while (j < b - 1 - i)
		{
			if (func_compare(a[j], a[j + 1]) > 0)
			{
				func_swap(&a[j], &a[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char	**argv)
{
	func_sort(argv, argc);
	while (*argv)
	{
		func_write(*argv);
		argv++;
	}
}
