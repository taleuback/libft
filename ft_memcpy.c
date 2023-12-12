/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:11:06 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/07 15:38:10 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*troudbal;

	troudbal = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (troudbal);
}
