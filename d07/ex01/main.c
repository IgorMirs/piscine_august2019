#include <stdio.h>
#include <stdlib.h>

int		count_malloc_size(int min, int max)
{
	if (max > 0 && min >= 0)
		return (max - min);
	else if (max <= 0)
	   return ((min * (-1) - max * (-1)));
	else
		return (max + min * (-1));	
}

int		*ft_range(int min, int max)
{
	int	*range;
	int	count;
	int	size;

	if (min >= max)
		return (0);
	size = count_malloc_size(min, max);
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

int		main(void)
{
	int *arr;
	arr = ft_range(-21, -1000000);
	for (int i = 0; i < count_malloc_size(-2147483648, -1000000); i++)
		printf ("%d ", arr[i]);	
}
