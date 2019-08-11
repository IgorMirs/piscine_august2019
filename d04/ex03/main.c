#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		if (power == 1 && power < 31)
			return (nb);
		return (nb * ft_recursive_power(nb, power - 1));
	}
	if (power == 0)
		return (1);
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_recursive_power(2, 32));
	printf("%d\n", ft_recursive_power(-2, 5));
	printf("%d\n", ft_recursive_power(2, -9));
	return (0);
}
