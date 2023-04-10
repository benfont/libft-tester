/*
 *
 * DESCRIPCION
 * La funcion ft_memset escribe  len  bytes del valor c 
 * (convertido en un unsigned char)
 * 
 * RETORNO
 * ft_memset retorna su primer argumento.
 *
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)s)[count] = (unsigned char)c;
		count++;
	}
	return (b);
}
