/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtenor-f <gtenor-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 19:37:58 by gtenor-f          #+#    #+#             */
/*   Updated: 2020/05/20 21:33:39 by gtenor-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
** Iterates trough the string 's' applying the function 'f' to each character,
** thus generating a new string from this applications.
**
**	Parameters
**	----------
**	char const *s: the string to be iterated.
**	char (*f)(unsigned int, char): the function to be applied.
**
**	Returns
**	-------
** The string created from the applications of the function 'f'.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		if (!(fstr = (char *)malloc(ft_strlen(s) + 1)))
			return (NULL);
		while (s[i] != 0)
		{
			fstr[i] = f(2, s[i]);
			i++;
		}
		fstr[i] = '\0';
		return (fstr);
	}
	return (NULL);
}