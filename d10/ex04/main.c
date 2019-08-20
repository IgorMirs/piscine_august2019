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
int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int count;

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
