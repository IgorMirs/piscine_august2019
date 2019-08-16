#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *dest_orig;
	
	dest_orig = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_orig);
}

int		main(void)
{
	char a[20]  = "dsfsf";
//	char b[20] = "qwerty\nqwerty\nhell0\n";
	char *dest = a;
//	char *src = b;
	
//	printf("\n");
//	printf("%s\n", strcpy(dest, "qwerty\n"));
	printf("%s", ft_strcpy(dest, "qwerty\n"));
	printf("%s", ft_strcpy(dest, ""));
	printf("%s", ft_strcpy(dest, "hell0\n"));
	return (0);
}
