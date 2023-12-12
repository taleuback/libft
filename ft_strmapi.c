/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:13:55 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/06 13:14:27 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*blank;

	if (!s |!f)
		return (NULL);
	blank = ft_strdup(s);
	if (!blank)
		return (NULL);
	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			blank[i] = (*f)(i, s[i]);
			i++;
		}
	}
	blank[i] = '\0';
	return (blank);
}
