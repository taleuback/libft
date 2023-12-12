/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:30:45 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/06 15:52:30 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char const	*pt;

	pt = NULL;
	while (*str)
	{
		if (*str == (char)c)
			pt = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)pt);
}

/*int main(void)
{
	const char str[] = "chier.peter.pt";
	const char c = '.';
	char *ret;

	ret = strrchr(str, c);
	printf("string after |%c| is - |%s|\n", c, ret);

	return(0);
}
*/