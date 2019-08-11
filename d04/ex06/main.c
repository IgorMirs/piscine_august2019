#include <stdio.h>

int		ft_is_prime(int nb)
{
	int check;
	int border;

	if (nb > 1)
	{
		if (nb == 2)
			return (1);
		check = 2;
		border = nb / 2 + 1;
		while (check <= border)
		{
			if (!(nb % check))
				return (0);
			check++;
		}
		return (1);
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_is_prime(2));
	return (0);
i}
