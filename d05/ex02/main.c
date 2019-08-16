#include <stdio.h>
#include <stdlib.h>

int		check_values_to_skip(char *c)
{
	if (*c == ' ' || *c == '\t' || *c == '\n')
		return (1);
	else if (*c == '\v' || *c == '\f' || *c == '\r')
		return (1);
	else if (*c == '+' && *(c + 1) >= '0' && *(c + 1) <= '9')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (*str < 33)
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;	
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * sign);
}

int		main(void)
{
	char *str;

	str = "-7 5 1";
	printf("My atoi   %d\n", ft_atoi(str));
	printf("Original atoi   %d\n", atoi(str));
	return (0);
}
