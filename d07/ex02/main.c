#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int	count;
	int size;

	if (min >= max)
		return (0);
	size = max - min;
	range = (int*)malloc(size * sizeof(int));
	count = 0;
	while (count < size)
	{
		range[count] = min;
		min++;
		count++;
	}
	return (range);
}

int ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}

int		main(void)
{
	int arr[] = {1, 2, 3};
	int *p_arr = arr;
	int res;
	int **pp_arr = &p_arr;
	res = ft_ultimate_range(pp_arr, 21, 53);
	printf("%d\n", res);
	for (int i = 0; i < res; i++)
		printf ("%d ", pp_arr[0][i]);
}
