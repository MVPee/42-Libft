/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:35:25 by mvpee             #+#    #+#             */
/*   Updated: 2023/10/11 10:40:59 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	separator_check(char a, char c)
{
	if (a == c)
		return (1);
	return (0);
}

int	total_sing(char const *s, char c)
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
	char	**sings;
	int		i;

	i = 0;
	if (!s || !c)
		return (0);
	sings = (char **)malloc(sizeof(char *) * (total_sing(s, c) + 1));
	if (!sings)
		return (0);
	while (*s)
	{
		while (*s && separator_check(*s, c))
			s++;
		if (*s != '\0')
		{
			sings[i] = ft_word(s, c);
			i++;
		}
		while (*s && !separator_check(*s, c))
			s++;
	}
	sings[i] = 0;
	return (sings);
}
