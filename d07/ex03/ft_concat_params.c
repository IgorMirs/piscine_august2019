/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 11:28:59 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/16 11:36:01 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
