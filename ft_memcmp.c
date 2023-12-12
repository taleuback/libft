/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:31:12 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/07 16:30:30 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*pt;
	unsigned const char	*pt2;

	pt = (unsigned const char *)s1;
	pt2 = (unsigned const char *)s2;
	while (n)
	{
		if (*pt != *pt2)
			return (*pt - *pt2);
		pt++;
		pt2++;
		n--;
	}
	return (0);
}

/*int main(void)
{
	char s1[15];
	char s2[15];
	int ret;
	
	memcpy(s1, "abcdef", 6);
	memcpy(s2, "ABCDEF", 6);
	
	ret = ft_memcmp(s1, s2, 5);

	printf("%d\n", ret);
}
*/