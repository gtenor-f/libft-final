/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtenor-f <gtenor-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:32:14 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/20 19:36:50 by gtenor-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Fills the pointed string with the value determined by c.
**
**	Parameters
**	----------
**	void *b: pointer to the memory to be filled.
**	int c: value meant to be stored in each byte.
**	size_t len: number of bytes to be filled.
**
**	Returns
**	-------
**	A pointer to the destination string.
*/

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	swap;

	swap = 0;
	if (len > 0)
	{
		while (swap < len)
		{
			((unsigned char*)b)[swap] = (unsigned char)(c);
			swap++;
		}
	}
	return (b);
}
