#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *dest_orig;
	int count;

	dest_orig = dest;
	count = 0;
	while (*src != '\0' && count != n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	//*dest = '\0';
	return (dest_orig);
}

int			main(void)
{
	char a[100] = "asdf";
//	char b[100] = "rj";
	char *dest = a;
//	char *src = b;
	
	
//	for(int i = 0; i < 9; i++)

	printf("%s\n", ft_strncpy(dest, "uiop", 5));
	printf("%s\n", ft_strncpy(dest, "qwerty", 4));
	printf("%s\n", ft_strncpy(dest, "z", 1));
	return (0);
}
