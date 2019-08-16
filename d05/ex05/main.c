#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int			check_equal(char *check_str, char *check_to_find)
{
	while (*check_to_find != '\0')
	{
		if (*check_to_find != *check_str)
			return (0);
		check_to_find++;
		check_str++;
	}
	return (1);
}

char		*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			if (check_equal(str, to_find))
				return (str);
			else
				return (NULL);
		}
		str++;
	}
	return (NULL);
}

int			main(void)
{
	char a[100] = "";
	char *dest = a;
	

	printf("%s\n", ft_strstr(dest,"i"));
	printf("%s\n", strstr(dest, "i"));
	return (0);
}
