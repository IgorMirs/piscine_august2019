/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imirsali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:30:38 by imirsali          #+#    #+#             */
/*   Updated: 2019/08/13 19:32:08 by imirsali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *str_orig;

	str_orig = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str_orig);
}

char	*ft_strcapitalize(char *str)
{
	char *str_orig;

	str_orig = str;
	str = ft_strlowcase(str);
	if (*str != '\0' && *str >= 'a' && *str <= 'z')
		*str -= 32;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z' && *(str - 1) == ' ')
			*str -= 32;
		str++;
	}
	return (str_orig);
}
