/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 10:07:19 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/15 18:22:11 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	while (**argv != '\0' && argc)
	{
		ft_putchar(**argv);
		(*argv)++;
	}
	ft_putchar('\n');
	return (0);
}
