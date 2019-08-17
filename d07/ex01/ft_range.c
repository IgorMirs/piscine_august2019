/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 21:14:04 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/15 21:14:35 by imirsali         ###   ########.fr       */
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
