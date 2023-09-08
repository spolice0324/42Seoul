#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char *src;
	char dest[20];

	src = "Hello World";
	printf("===CASE1===\n");
	printf("base   : %s\n", src);
	
	strncpy(dest, src, 8);
	printf("cpy    : %s\n", dest);
	
	ft_strncpy(dest, src, 8);
	printf("ft_cpy : %s\n", dest);
	
	src = "               a     ";
	printf("===CASE2===\n");
	printf("base   : %s\n", src);
	
	strncpy(dest, src, 16);
	printf("cpy    : %s\n", dest);
	
	ft_strncpy(dest, src, 16);
	printf("ft_cpy : %s\n", dest);
}
