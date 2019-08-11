#include <unistd.h>

int			ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
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
	while (i < 10)
	{
		a[i] = c;
		c++;
		i++;
	}
	a[9] = '\0';
	
	ft_putstr(str);
	return (0);
}
