#include <stdio.h>

/*function to work*/
int		foo(char *str)
{
	if (*str == 'z')
		return (1);
	else
		return (0);
}

/*function which takes pointer to function*/
int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

int		main(void)
{
	char *tab[4] = {"asd", "qwe", "123"};
	int(*f)(char*);
	f = &foo;
	printf("%d", ft_any(tab, f));
}
