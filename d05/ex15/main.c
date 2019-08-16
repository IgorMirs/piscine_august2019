#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int		ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str > 32 && *str < 127))
			str++;
		else
			return (0);
	}
	return (1);
}

int			main(void)
{
	char a[100] = "sdfsdgfweAds	";
	char *dest = a;

	

	printf("%d\n", ft_str_is_printable(dest));
//	printf("%s\n", strupcase(dest));
	return (0);
}
