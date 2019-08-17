#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int count;
	int i;
	char *str;

	count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		count++;
		i++;
	}
	str = (char*)malloc((count + 1) * sizeof(char));
	i = 0;
	while (i < count)
	{
		str[i] = src[i];
		i++;
	}	
	str[i] = '\0';
	return (str);
}

int		main(int argc, char **argv)
{
	char *str = "Hello";
	printf ("%s\n", ft_strdup(str));	
}
