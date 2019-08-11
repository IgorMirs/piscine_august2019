/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 13:10:36 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/10 21:02:40 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int check;
	int border;

	if (nb > 1)
	{
		if (nb == 2)
			return (1);
		check = 2;
		border = nb / 2 + 1;
		while (check <= border)
		{
			if (!(nb % check))
				return (0);
			check++;
		}
		return (1);
	}
	return (0);
}
