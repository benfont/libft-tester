/*
El argumento c es un valor entero que representa un carácter, y la función devuelve un valor entero que indica si el valor del carácter se encuentra en el rango de caracteres ASCII o no.

El valor de retorno de la función isascii() es un entero. Si el argumento c es un valor de carácter que se encuentra en el rango ASCII (0 a 127), la función devuelve un valor distinto de cero, generalmente 1. De lo contrario, la función devuelve cero (0).

Es importante destacar que el argumento c puede ser cualquier valor entero. Si el valor de c no es un valor de carácter válido, la función puede devolver un valor distinto de cero aunque ese valor no se encuentre en el rango ASCII.
*/

#include <unistd.h>
#include <stdio.h>

int	ft_isascii(int d)
{
	if(d >= 0 && d <= 127)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;

	c = '{';
	printf("%d\n", ft_isascii(c));
	return (0);
}
