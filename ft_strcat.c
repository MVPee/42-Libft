/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:03:07 by mvpee             #+#    #+#             */
/*   Updated: 2023/09/19 19:09:09 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{
    int i;
    int j;

    i = 0;
	j = 0;
    while (dest[j])
		j++;
	while (src[i])
	{
		dest[j + i] = src[i];
        i++;
    }
	dest[i + j] = '\0';
	return (dest);
}
