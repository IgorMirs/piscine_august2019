/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:45:01 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/18 16:17:00 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 != '\0')
			return (match(s1 + 1, s2) + match(s1, s2 + 1));
		if (*s1 == '\0')
			return (match(s1, s2 + 1));
	}
	if (*s1 != '\0')
	{
		if (*s1 == *s2)
			return (match(s1 + 1, s2 + 1));
		if (*s1 != *s2)
			return (0);
	}
	if (*s2 == *s1 && *s1 == '\0')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc)
		printf("%d\n", match(argv[1], argv[2]));
	return (0);
}
