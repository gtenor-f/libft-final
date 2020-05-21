/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtenor-f <gtenor-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 19:37:48 by gtenor-f          #+#    #+#             */
/*   Updated: 2020/05/20 19:45:01 by gtenor-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Copies a string up to (dstsize - 1) from the source string to the
**	destiny string.
**
**	Variables
**	---------
**	char *dst: A pointer to the destination string.
**	const char *src: A pointer to the source string.
**	size_t dstsize: Size of the destination buffer.
**
**	Returns
**	-------
**	The lenght of the string, meaning the length of src.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	if (dst == 0 || src == 0)
		return (0);
	i = 0;
	srclen = ft_strlen(src);
	if (dstsize)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (srclen);
}
