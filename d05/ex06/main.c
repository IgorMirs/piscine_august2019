#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int			ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (*s1 - *s2);
}

int			main(void)
{
	char a[100] = "yyyy";
	char *dest = a;

	

	printf("%d\n", ft_strcmp(dest,"eat"));
	printf("%d\n", strcmp(dest, "eat"));
	return (0);
}
