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
			*str += 32;
		str++;
	}
	return (str_orig);
}

char	*ft_strcapitalize(char *str)
{
	char *str_orig;

	str_orig = str;
	str = ft_strlowcase(str);
	if (*str != '\0' && *str >= 'a' && *str <= 'z')
		*str -= 32;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z' && *(str - 1) == ' ')
			*str -= 32;
		str++;
	}
	return (str_orig);
}

int			main(void)
{
	char a[100] = "AFLVO1 23G!d@* #e hJhh";
	char *dest = a;

	

	printf("%s\n", ft_strcapitalize(dest));
//	printf("%s\n", strupcase(dest));
	return (0);
}
