/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtenor-f <gtenor-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 18:28:39 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/20 19:38:43 by gtenor-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Converts a lowercase string to uppercase.
**	This function was overcomplicated for didactic reasons.
**	Using a counter to iterate over the array would be much simpler.
**
**	Parameters
**	----------
**	char *s: the string to be converted.
*/

char	*ft_strupcase(char *s)
{
	size_t len;

	len = ft_strlen(s);
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		s++;
	}
	return ((char *)(s - len));
}
