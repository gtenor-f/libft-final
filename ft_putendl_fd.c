/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtenor-f <gtenor-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:25:50 by pde-carv          #+#    #+#             */
/*   Updated: 2020/05/20 19:37:01 by gtenor-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description
**	-----------
**	Outputs a given string followed by a new line after its end to a given
**	file descriptor.
**
**	Parameters
**	----------
**	char *s: the string to output.
**	int fd: the file descriptor on which to write.
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (s != 0)
	{
		while (*s)
		{
			write(fd, &*s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}
