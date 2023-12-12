/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:05:18 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/06 17:13:40 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (size <= 0 || !dest)
		return (len);
	while (i < size - 1 && i < len)
		*dest++ = src[i++];
	*dest = '\0';
	return (len);
}
