#include <unistd.h>
#include "./ft_putstr.c"

int		main(void)
{
	char *str;
	
	char a[20] = "Hello, pisciners!";
	str = a;

	ft_putstr(str);
	return (0);
}
