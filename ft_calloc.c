/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:28:43 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/07 16:16:39 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tab;
	size_t			i;

	i = nmemb * size;
	if (i == 0)
		return (malloc(0));
	if ((nmemb == 0) || (size > 4294967295 / nmemb))
		return (NULL);
	tab = malloc(i);
	if (!tab)
		return (NULL);
	while (i--)
		tab[i] = 0;
	return (tab);
}
