/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 09:56:11 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/10 09:57:12 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power > 0)
	{
		while (power >= 1)
		{
			res *= nb;
			power--;
		}
		return (res);
	}
	if (power == 0)
		return (1);
	return (0);
}
