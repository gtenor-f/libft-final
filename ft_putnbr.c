/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtenor-f <gtenor-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 01:52:09 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/20 19:37:13 by gtenor-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Outputs a integer as a character.
**
**	Parameters
**	----------
**	int n: the integer to be written.
*/

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0 && n != -2147483648)
		{
			ft_putchar('-');
			n = n * -1;
		}
		if (n / 10)
			ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
}
