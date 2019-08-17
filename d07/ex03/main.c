#include <stdio.h>
#include <stdlib.h>

int		count_length(int argc, char **argv)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			count++;
			j++;
		}
		count++;
		i++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;
	char	*orig_str;

	str = (char*)malloc(count_length(argc, argv) * sizeof(char));
	orig_str = str;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			*str = argv[i][j];
			j++;
			str++;
		}
		if (i != argc - 1)
			*str = '\n';
		str++;
		i++;
	}
	return (orig_str);
}

int		main(int argc, char **argv)
{
	char *str;
	str = ft_concat_params(argc, argv);
	printf("%s\n", str);
	return (0);
}
