#include <stdio.h>
#include <string.h>

int		main(void)
{

char	*ft_strcpy(char *dest, char *src);

	char *src;
	char dest[12];

	src = "Hello World";
	printf("base   : %s\n", src);
	strcpy(dest, src);
	printf("cpy    : %s\n", dest);
	ft_strcpy(dest, src);
	printf("ft_cpy : %s\n", dest);
}

