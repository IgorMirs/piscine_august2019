/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 11:48:49 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/10 11:52:07 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int check;
	int check_square;

	if (nb > 0)
	{
		check = 1;
		while (check <= nb)
		{
			check_square = check * check;
			if (check_square == nb)
				return (check);
			check++;
		}
	}
	return (0);
}
