#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *dest_orig;
	unsigned int count;

	dest_orig = dest;
	count = 0;
	while (*src != '\0' && count != n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	return (dest_orig);
}

char		*ft_strncpy_git(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	return (dest);
}

int			main(void)
{
	char a[100] = "asdf";
//	char b[100] = "rj";
	char *dest = a;
//	char *src = b;
	
	
//	for(int i = 0; i < 9; i++)

	printf("My %s\t\n", ft_strncpy(dest, "f", 5));
	printf("My %s\t\n", ft_strncpy(dest, "qwerty", 4));
	printf("My %s\t\n", ft_strncpy(dest, "z", 1));
	printf("orig %s\t\n", strncpy(dest, "f", 5));
	printf("orig %s\t\n", strncpy(dest, "qwerty", 4));
	printf("orig %s\t\n", strncpy(dest, "z", 1));
	printf("git %s\t\n", ft_strncpy_git(dest, "f", 5));
	printf("git %s\t\n", ft_strncpy_git(dest, "qwerty", 4));
	printf("git %s\t\n", ft_strncpy_git(dest, "z", 1));
	return (0);
}
