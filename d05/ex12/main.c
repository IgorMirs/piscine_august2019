#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int		ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9'))
			str++;
		else
			return (0);
	}
	return (1);
}

int			main(void)
{
	char a[100] = "12124$56";
	char *dest = a;

	

	printf("%d\n", ft_str_is_numeric(dest));
//	printf("%s\n", strupcase(dest));
	return (0);
}
