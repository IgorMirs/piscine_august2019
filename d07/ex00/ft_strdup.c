/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:26:50 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/15 17:30:05 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		count;
	int		i;
	char	*str;

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
