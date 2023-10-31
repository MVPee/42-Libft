/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-pee <mvan-pee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:35:25 by mvpee             #+#    #+#             */
/*   Updated: 2023/10/31 11:10:02 by mvan-pee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	separator_check(char a, char c)
{
	if (a == c)
		return (1);
	return (0);
}

int	total_string(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && separator_check(s[i], c))
			i++;
		if (s[i])
			count++;
		while (s[i] && !separator_check(s[i], c))
			i++;
	}
	return (count);
}

int	sep_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && !separator_check(s[i], c))
		i++;
	return (i);
}

char	*ft_word(char const *s, char c)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = sep_len(s, c);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (NULL);
	while (i < len_word)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;

	i = 0;
	if (!s)
		return (0);
	strings = (char **)malloc(sizeof(char *) * (total_string(s, c) + 1));
	if (!strings)
		return (0);
	while (*s)
	{
		while (*s && separator_check(*s, c))
			s++;
		if (*s != '\0')
		{
			strings[i] = ft_word(s, c);
			i++;
		}
		while (*s && !separator_check(*s, c))
			s++;
	}
	strings[i] = 0;
	return (strings);
}
