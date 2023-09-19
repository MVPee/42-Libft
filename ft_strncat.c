/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:09:01 by mvpee             #+#    #+#             */
/*   Updated: 2023/09/19 19:10:15 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strncat(char *dest, const char *src, size_t n)
{
    int i;
    int j;

    i = 0;
	j = 0;
    while (dest[j])
		j++;
	while (src[i] && n > 0)
	{
		dest[j + i] = src[i];
        i++;
        n--;
    }
	dest[i + j] = '\0';
	return (dest);
}
