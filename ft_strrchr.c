/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtenor-f <gtenor-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 19:38:28 by gtenor-f          #+#    #+#             */
/*   Updated: 2020/05/20 19:45:16 by gtenor-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Finds the last occurrence of a character 'c' in the pointed string 's'.
**
**	Parameters
**	----------
**	const char *str: a pointer to the string to parse.
**	int c: element to be located.
**
**	Returns
**	-------
**	A pointer to the to the found character.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		n;
	char	*backup;

	backup = (char *)s;
	n = ft_strlen(backup);
	if (s[n] == '\0' && c == '\0')
		return (&backup[n]);
	while (n--)
	{
		if (s[n] == c)
			return (&backup[n]);
	}
	return (0);
}
