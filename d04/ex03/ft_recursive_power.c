/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 10:24:59 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/10 20:50:02 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power > 0 && power < 31)
	{
		if (power == 1)
			return (nb);
		return (nb * ft_recursive_power(nb, power - 1));
	}
	if (power == 0)
		return (1);
	return (0);
}
