/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 11:46:33 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/12 19:25:55 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

void		ft_putnbr(int nb)
{
	long int nb_l;

	nb_l = nb;
	if (nb_l < 0)
	{
		ft_putchar('-');
		nb_l *= -1;
	}
	if (nb_l / 10 == 0)
	{
		ft_putchar(nb_l % 10 + '0');
		return ;
	}
	if (nb_l >= 0)
		ft_putnbr(nb_l / 10);
	ft_putchar(nb_l % 10 + '0');
}
