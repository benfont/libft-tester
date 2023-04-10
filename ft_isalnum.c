/*
El argumento c es un valor entero que representa un carácter, y la función devuelve un valor entero que indica si el carácter es alfanumérico o no.

Es importante destacar que el argumento c debe ser un valor de carácter representado como un valor ASCII o el valor de la constante EOF. Si se pasa a la función un valor que no sea un carácter válido, el comportamiento de la función será indefinido.

El valor de retorno de la función isalnum() es un entero. Si el argumento c representa un carácter alfanumérico (es decir, una letra del alfabeto en mayúsculas o minúsculas, o un dígito decimal), la función devuelve un valor distinto de cero, generalmente 1. De lo contrario, la función devuelve cero (0).
*/

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(int i)
{
	if((i >= '0' && i <= '9') || (i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;

	c = 'a';
	printf("(1) -> alfanumerico\n(0) -> no alfanumerico\n%d", ft_isalnum(c));
	return (0);
}
