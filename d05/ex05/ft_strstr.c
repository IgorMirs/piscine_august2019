/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:54:40 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/13 15:42:49 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			check_equal(char *check_str, char *check_to_find)
{
	while (*check_to_find != '\0')
	{
		if (*check_to_find != *check_str)
			return (0);
		check_to_find++;
		check_str++;
	}
	return (1);
}

char		*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			if (check_equal(str, to_find))
				return (str);
			else
				return (0);
		}
		str++;
	}
	return (0);
}
