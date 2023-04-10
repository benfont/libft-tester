#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int d)
{
	if((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;

	c = 'H';
	printf("(1) -> es una letra\n(0) -> no es una letra\n %d", ft_isalpha(c));
	return (0);
}
