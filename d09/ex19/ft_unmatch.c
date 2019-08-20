/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 13:28:20 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/16 13:28:41 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int equal_number;

	i = 0;
	while (i < length)
	{
		j = 0;
		equal_number = 1;
		while (j < length)
		{
			if (j == i)
			{
				j++;
				continue;
			}
			if (tab[i] == tab[j])
				equal_number++;
			j++;
		}
		if (equal_number % 2)
			return (tab[i]);
		i++;
	}
	return (0);
}
