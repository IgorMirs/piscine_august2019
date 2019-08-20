#include <stdio.h>
#include <stdlib.h>

/*function to work*/
int		foo(int a)
{
	return (a * a);
}

/*function which takes pointer to function*/
int		*ft_foreach(int *tab, int length, int(*f)(int))
{
	int i;
	int *arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * length + 1);
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}

int		main(void)
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};	
	int *b;
	int(*f)(int);
	int i;

	i = 0;
	f = &foo;
	b = ft_foreach(a, 10, f);
	while (i < 10)
	{
		printf("%d ", b[i]);
		i++;
	}
}
