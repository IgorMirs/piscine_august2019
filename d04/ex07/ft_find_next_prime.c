/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 21:28:59 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/10 21:29:14 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int check;
	int border;

	if (nb > 1)
	{
		if (nb == 2)
			return (nb);
		check = 2;
		border = nb / 2 + 1;
		while (check <= border)
		{
			if (!(nb % check))
				return (ft_find_next_prime(nb + 1));
			check++;
		}
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}
