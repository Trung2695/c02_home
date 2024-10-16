#include <string.h>
#include <stdio.h>

int	ft_strlen(char *a);

int	main(int argc, char *argv[])
{
	if (ft_strlen(argv[1]) == strlen(argv[1]))
		printf("Correct");
	else
		printf("Incorrect");
	return (argc);
}
