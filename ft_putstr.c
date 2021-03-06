/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtenor-f <gtenor-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 02:07:38 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/20 19:37:20 by gtenor-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Outputs a given string.
**
**	Parameters
**	----------
**	char *s: the string to be written.
*/

void	ft_putstr(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
	}
}
