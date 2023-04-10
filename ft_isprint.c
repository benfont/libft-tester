/*
La función isprint() es una función en lenguaje C que se utiliza para determinar si un carácter es imprimible.
*/

#include <unistd.h>
#include <stdio.h>

int	ft_isprint(int d)
{
	if(d >= 32 && d <= 126)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;

	c = '!';
	printf("%d\n", ft_isprint(c));
	return (0);
}
