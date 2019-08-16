#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	char *str_orig;

	str_orig = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str+= 32;
		str++;
	}
	return (str_orig);
}

int			main(void)
{
	char a[100] = "AFLVO123G!d@*#ehJhh";
	char *dest = a;

	

	printf("%s\n", ft_strlowcase(dest));
//	printf("%s\n", strupcase(dest));
	return (0);
}
