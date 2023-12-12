/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:20:57 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/06 11:34:57 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

// int main(void)
// {
//	 const char str[] = "coucou.ordchie";
//	 const char c = '.';
//	 char *ret;

//	 ret = strchr(str, c);

//	 printf("string after |%c| is - |%s|\n", c, ret);

//	 return(0);
// }
