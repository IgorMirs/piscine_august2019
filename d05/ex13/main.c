#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int		ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z'))
			str++;
		else
			return (0);
	}
	return (1);
}

int			main(void)
{
	char a[100] = "sdfAds";
	char *dest = a;

	

	printf("%d\n", ft_str_is_lowercase(dest));
//	printf("%s\n", strupcase(dest));
	return (0);
}
