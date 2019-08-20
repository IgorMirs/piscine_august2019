#include <stdio.h>

/*function to work*/
void	foo(int a)
{
	printf("I am stupid function %d\n", a);
}

/*function which takes pointer to function*/
void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int		main(void)
{
	int a[10] = {1, 2, 3};
	void(*f)(int);
	f = &foo;
	ft_foreach(a, 10, f);
}
