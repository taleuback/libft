/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:10:33 by ocrobin           #+#    #+#             */
/*   Updated: 2023/11/30 16:58:40 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*trou;

	i = 0;
	trou = (unsigned char *)str;
	while (i < n)
	{
		trou[i] = c;
		i++;
	}
	return (str = trou);
}
