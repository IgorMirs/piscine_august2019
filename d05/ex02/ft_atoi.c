/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 23:37:45 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/13 23:38:33 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (*str < 33)
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * sign);
}
