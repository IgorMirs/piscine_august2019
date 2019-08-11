#include <stdio.h>

void		ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0 && div && mod)
	{
		*mod = a % b;
		*div = a / b;
	}
}

int		main(void)
{
	int a, b;
	int *div, *mod;

	div = &a;
	mod = &b;

	a = 10;
	b = 4;
	ft_div_mod(a, b, div, mod);

	printf("%d %d", *div, *mod);
	return (0);
}
