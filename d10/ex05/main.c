#include <stdio.h>

/*function to work*/
int		foo(char *str)
{
	if (*str == 'a')
		return (1);
	else
		return (0);
}

/*function which takes pointer to function*/
int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int count;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]))
		{
		
		}
	}
	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

int		main(void)
{
	char *tab[6] = {"asd", "qwe", "123", "asdas", "fds"};
	int(*f)(char*);
	f = &foo;
	printf("%d", ft_count_if(tab, f));
}
