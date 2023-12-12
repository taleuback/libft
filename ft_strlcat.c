/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:02:50 by ocrobin           #+#    #+#             */
/*   Updated: 2023/11/30 15:09:03 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sizesrc;
	size_t	sizedest;
	size_t	i;

	i = 0;
	sizesrc = 0;
	sizedest = 0;
	while (src[sizesrc])
		sizesrc++;
	while (dst[sizedest] && sizedest < size)
		sizedest++;
	if (size == 0)
		return (sizesrc);
	if (size <= sizedest)
		return (size + sizesrc);
	while ((size - 1) > (i + sizedest) && src[i])
	{
		dst[sizedest + i] = src[i];
		i++;
	}
	dst[sizedest + i] = '\0';
	return (sizesrc + sizedest);
}
