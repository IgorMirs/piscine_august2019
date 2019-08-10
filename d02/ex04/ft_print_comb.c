/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:26:24 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/08 13:20:00 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	char hund;
	char tens;
	char dig;

	hund = '/';
	while (++hund <= '7')
	{
		tens = hund;
		while (++tens <= '8')
		{
			dig = tens;
			while (++dig <= '9')
			{
				ft_putchar(hund);
				ft_putchar(tens);
				ft_putchar(dig);
				if ((hund != '7') || (tens != '8') || (dig != '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
