/*
La función strlen() es una función en lenguaje C que se utiliza para determinar la longitud de una cadena de caracteres.
*/

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while(s[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	main(void)
{
	char c[] = "hola";

	printf("%zu\n", ft_strlen(c));
	return (0);
}
