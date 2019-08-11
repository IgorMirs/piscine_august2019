#include <stdio.h>

int		ft_strlen(char *str)
{
	int count;

	if (str)
	{
		count = 0;
		while (*str != '\0')
		{
			count++;
			str++;
		}
		return (count);
	}
	return (0);
}

int		main(void)
{
	char *str;
	char a[10];
	int i;
	char c;

	i = 0;
	c = 20 + '0';
	str = a;
	while (i < 9)
	{
		a[i] = c;
		c++;
		i++;
	}
	
	printf("%d", ft_strlen(str));
	return (0);
}
