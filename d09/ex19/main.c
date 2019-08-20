#include <stdio.h>

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int equal_number;

	i = 0;
	while (i < length)
	{
		j = 0;
		equal_number = 1;
		while (j < length)
		{
			if (j == i)
			{
				j++;
				continue;
			}
			if (tab[i] == tab[j])
				equal_number++;
			j++;
		}
		if (equal_number % 2)
			return (tab[i]);
		i++;
	}
	return (0);
}

int		main(void)
{
	int arr[] = {1,1,2,4,3,2,3,4};
	int	*p_arr = arr;
	printf("%d", ft_unmatch(p_arr, 8));
	return (0);
}
