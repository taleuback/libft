/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:35:13 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/06 13:01:48 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*elo;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	elo = (char *)malloc(sizeof(char) * (len + 1));
	if (!elo)
		return (NULL);
	while (s1[i] != '\0')
	{
		elo[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		elo[i++] = s2[j++];
	elo[i] = '\0';
	return (elo);
}
