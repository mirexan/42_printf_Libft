#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	int neg = -2;
	unsigned int	prueba = 0xa;
	int	len;
	
	len = ft_printf("%%\n");
	printf("len es %d\n", len);
	len = ft_printf("%i\n", neg);
	printf("len de neg es: %i\n", len);
	len = ft_printf("%u\n", neg);
	printf("len de neg en u es :%i\n", len);
	ft_printf("%x\n", prueba);
	return (0);
}
