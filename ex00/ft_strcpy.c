#include<stdio.h>
char	*ft_strcpy(char* dest, char* str)
{
	dest = str;
	while (*str)
	{
		*dest = *str;
		str++;
		dest++;
	}
	*dest = '\0';
	return dest;
}

int	main(void)
{
	char	*b;
	char	a[100];
	
	a = "Hello how are you?";
	b = "Hi";
	ft_strcpy(a, b);
}
