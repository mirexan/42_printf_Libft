#include "printf.h"
#include <stdio.h>

int	main()
{
	int d = 450;
	int neg = -2;
	unsigned int	prueba = 0xa;
	int	len;
	
	len = ft_printf("%d\n", d);
	printf("len de d %d\n", len);
	len = ft_printf("%i\n", neg);
	printf("len de neg es: %i\n", len);
	len = ft_printf("%u\n", neg);
	printf("len de neg en u es :%i\n", len);
	ft_printf("%x\n", prueba);
	return (0);
}
