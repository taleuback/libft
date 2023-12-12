/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:33:09 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/06 13:12:36 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strdup(const char *s1)
{
	char	*dest;
	char	*start;

	dest = str_new(str_len(s1));
	if (!dest)
		return (NULL);
	start = dest;
	while (*s1)
		*dest++ = *s1++;
	*dest = '\0';
	return (start);
}
