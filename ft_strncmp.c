/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:30:26 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/06 16:20:21 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (((unsigned char)(*s1) - (unsigned char)(*s2)));
}

/*int main(void)
{
	char s1[15];
	char s2[15];
	int ret;
	int ret2;

	strcpy(s1, "ABCDEF");
	strcpy(s2, "dfgvbjl");

	ret = ft_strncmp(s1, s2, 4);
	ret2 = strncmp(s1, s2, 4);

	printf("%d\n", ret);
	printf("%d\n", ret2);

	return(0);
}*/