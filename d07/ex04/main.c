#include <stdio.h>
#include <stdlib.h>

int		count_words(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t')
		{
			while ((*str == ' ' || *str == '\t') && *str != '\0')
				str++;
		}
		else
		{
		   	while ((*str != ' ' || *str != '\t') && *str != '\0')
		   		str++;
			count++;
		}
	}
	return count;
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	char **tab;

	i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	*tab = str;
	(*tab)++;
	while (*str != ' ' || *str != '\0')
		str++;
return (0);

}


int		main(int argc, char **argv)
{
	char *str = "		a     dsfs     gds ";
	printf("%s\n", str);
	printf("Value %d\n", count_words(str));
	return (0);
}
