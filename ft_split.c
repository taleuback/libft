/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:17:21 by ocrobin           #+#    #+#             */
/*   Updated: 2023/11/30 15:04:52 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_is_separator(char c, char sep)
{
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

static int	count_words(char *str, char sep)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i], sep) == 0
			&& char_is_separator(str[i + 1], sep))
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, char *from, char sep)
{
	int	i;

	i = 0;
	while (char_is_separator(from[i], sep) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static void	*write_split(char **split, char *str, char sep)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i], sep) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_separator(str[i + j], sep) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (split[word] == NULL)
				return (NULL);
			write_word(split[word++], str + i, sep);
			i += j;
		}
	}
	return (split);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	char	*str;
	int		words;

	if (!s)
		return (NULL);
	str = (char *)s;
	words = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	res[words] = 0;
	if (write_split(res, str, c) == NULL)
		return (NULL);
	return (res);
}

// int	main()
// {
// 	int		index;
// 	char	**split;
// 	split = ft_split("je weqwef	w fw m wm wef iw e qe", 32);
// 	index = 0;
// 	while (split[index] != 0)
// 	{
// 		printf("%s\n", split[index]);
// 		index++;
// 	}
// 	return (0);
// }