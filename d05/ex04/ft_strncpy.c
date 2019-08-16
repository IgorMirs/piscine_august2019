/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:21:09 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/13 12:20:43 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char				*dest_orig;
	unsigned int		count;

	dest_orig = dest;
	count = 0;
	while (*src != '\0' && count != n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	return (dest_orig);
}
