/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 13:42:46 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/08 17:22:48 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_mult_putchar(char tens1, char dig1, char tens2, char dig2)
{
	ft_putchar(tens1);
	ft_putchar(dig1);
	ft_putchar(' ');
	ft_putchar(tens2);
	ft_putchar(dig2);
	if (!(tens1 == '9' && dig1 == '8' && tens2 == '9' && dig2 == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char tens1;
	char dig1;
	char tens2;
	char dig2;

	tens1 = '/';
	while (++tens1 <= '9')
	{
		dig1 = '/';
		while (++dig1 <= '9')
		{
			tens2 = tens1 - 1;
			while (++tens2 <= '9')
			{
				if (tens2 == tens1)
					dig2 = dig1;
				else
					dig2 = '/';
				while (++dig2 <= '9')
					ft_mult_putchar(tens1, dig1, tens2, dig2);
			}
		}
	}
}
