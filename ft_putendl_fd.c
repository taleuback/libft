/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:22:06 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/06 11:27:17 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, str_len(s));
		write(fd, "\n", 1);
	}
}
