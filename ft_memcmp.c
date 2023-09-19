/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:27:47 by mvpee             #+#    #+#             */
/*   Updated: 2023/09/19 18:36:12 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s3;
	const unsigned char	*s4;
	int					i;

	s3 = (const unsigned char *)s1;
	s4 = (const unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (s3[i] != s4[i])
			return (s3[i] - s4[i]);
		i++;
	}
	return (0);
}
