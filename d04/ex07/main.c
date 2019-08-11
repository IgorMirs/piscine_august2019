#include <stdio.h>

int		ft_find_next_prime(int nb)
{
	int check;
	int border;

	if (nb > 1)
	{
		if (nb == 2)
			return (nb);
		check = 2;
		border = nb / 2 + 1;
		while (check <= border)
		{
			if (!(nb % check))
				return (ft_find_next_prime(nb + 1));
			check++;
		}
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}

int		main(void)
{
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(0));
	return (0);
}
