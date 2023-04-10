#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(int d)
{
	if(d >= '0' && d <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;

	c = '6';
	printf("(1) -> es un digito\n(0) -> no es un digito\n %d", ft_isdigit(c));
	return (0);
}
