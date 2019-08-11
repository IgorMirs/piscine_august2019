#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int		main(void)
{
	printf("%d\n", ft_fibonacci(12));
	printf("%d\n", ft_fibonacci(13));
	printf("%d\n", ft_fibonacci(14));
	return (0);
}
