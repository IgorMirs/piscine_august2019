#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power > 0)
	{
		while (power >= 1)
		{
			res *= nb;
			power--;
		}
		return (res);
	}
	if (power == 0)
		return (1);
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(-2, 5));
	printf("%d\n", ft_iterative_power(2, -9));
	return (0);
}
