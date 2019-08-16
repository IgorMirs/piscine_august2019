#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char	*ft_strupcase(char *str)
{
	char *str_orig;

	str_orig = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str-= 32;
		str++;
	}
	return (str_orig);
}

int			main(void)
{
	char a[100] = "as123G!d@*#ehhhh";
	char *dest = a;

	

	printf("%s\n", ft_strupcase(dest));
//	printf("%s\n", strupcase(dest));
	return (0);
}
