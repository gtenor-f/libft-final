/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtenor-f <gtenor-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 19:36:25 by gtenor-f          #+#    #+#             */
/*   Updated: 2020/05/20 19:44:24 by gtenor-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Parameters
**	----------
**	Locates the first ocurrence of a byte in a buffer.
**
**	Parameters
**	----------
**	const void *s : buffer you want to search.
**	int c : byte you are looking for.
**	size_t n: number of bytes to search in the string.
**
**	Returns
**	-------
**	A pointer to the located byte.
**	Another way to write the return is: return (&aux_s[i]).
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*src == (unsigned char)c)
			return (src);
		src++;
	}
	return (NULL);
}
