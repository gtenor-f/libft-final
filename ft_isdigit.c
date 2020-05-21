/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtenor-f <gtenor-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:42:46 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/20 20:06:00 by gtenor-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Tests a character to see if it is a decimal digit.
**
**	Parameters
**	----------
**	int c: the character to be tested.
*/

int	ft_isdigit(long long c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
