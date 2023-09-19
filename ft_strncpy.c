/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:59:33 by mvpee             #+#    #+#             */
/*   Updated: 2023/09/19 19:09:11 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;

	i = 0;
	while (src[i] && n != 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	while (n != 0)
	{
		dest[i] = '\0';
		n--;
		i++;
	}
	return (dest);
}
