/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:14:42 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/13 18:26:04 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	count = 1;
	while (*s1 != '\0' && count < n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
		count++;
	}
	return (*s1 - *s2);
}
