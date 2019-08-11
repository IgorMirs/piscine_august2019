#include <stdio.h>

int		ft_sqrt(int nb)
{
	int check;

	if (nb > 0)
	{
		check = 1;
		while (check <= nb)
		{
			if (check * check  == nb)
				return (check);
			check++;
		}
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(225));
	return (0);
}
