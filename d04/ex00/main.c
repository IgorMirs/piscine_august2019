#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int fact;

	if (nb >= 0 && nb < 13)
	{
		fact = 1;
		while (nb >= 1)
		{
			fact *= nb;
			nb--;
		}
		return (fact);
	}
	return (0);
}

int		main(void)
{
	printf("%d ", ft_iterative_factorial(15));
	printf("%d ", ft_iterative_factorial(0));
	printf("%d", ft_iterative_factorial(1));
	return (0);
}
