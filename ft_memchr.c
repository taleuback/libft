/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:29:55 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/04 14:21:33 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)str++ == (unsigned char)c)
			return ((void *)(unsigned char *)str - 1);
	}
	return (NULL);
}

/*int main(void)
{
	const char str[] = "caca.pipi.croute";
	const char ch = '.';
	char *ret;

	ret = memchr(str, ch, strlen(str));

	printf("string after |%c| is - |%s|\n", ch, ret);

	return(0);
}
*/