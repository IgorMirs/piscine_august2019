#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb >=0 && nb < 13)
	{
		if (nb == 0)
			return (1);
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}

int		main(void)
{
	printf("%d ", ft_recursive_factorial(0));
	printf("%d ", ft_recursive_factorial(-2));
	printf("%d", ft_recursive_factorial(5));
	return (0);
}
