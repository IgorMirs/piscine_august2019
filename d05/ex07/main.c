#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int			ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	count = 1;
	while (*s1 != '\0' && count < n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
		count++;
	}
	return (*s1 - *s2);
}

int			main(void)
{
	char a[100] = "asde";
	char *dest = a;

	

	printf("%d\n", ft_strncmp(dest,"asdy", 3));
	printf("%d\n", strncmp(dest, "asdf", 3));
	return (0);
}
