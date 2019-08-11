#include <stdio.h>

void		ft_ultimate_div_mod(int *a, int *b)
{
	if (*b != 0 && a && b)
	{
		int div;
		int mod;

		mod = *a % *b;
		div = *a / *b;
		*a = div;
		*b = mod;
	}
}

int		main(void)
{
	int a, b;
	int *div, *mod;

	div = &a;
	mod = &b;

	a = 10;
	b = 0;
	ft_ultimate_div_mod(div, mod);

	printf("%d %d", *div, *mod);
	return (0);
}
