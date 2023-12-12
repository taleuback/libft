/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:13:30 by ocrobin           #+#    #+#             */
/*   Updated: 2023/12/06 17:54:09 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_isnegative(char *s, int n)
{
	if (n < 0)
		s[0] = '-';
}

static size_t	count_numbers(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	if (!n)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	int		alts;

	len = count_numbers(n);
	s = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = 0;
	alts = n;
	if (n < 0)
		alts *= -1;
	while (len)
	{
		s[--len] = alts % 10 + '0';
		alts /= 10;
	}
	ft_isnegative(s, n);
	return (s);
}

// int main(void)
// {
// 	printf("%s\n", ft_itoa(-9));
// 	return (0);
// }
