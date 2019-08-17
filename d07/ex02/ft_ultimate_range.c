/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 22:52:55 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/15 22:53:39 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*range;
	int	count;
	int size;

	if (min >= max)
		return (0);
	size = max - min;
	range = (int*)malloc(size * sizeof(int));
	count = 0;
	while (count < size)
	{
		range[count] = min;
		min++;
		count++;
	}
	return (range);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
