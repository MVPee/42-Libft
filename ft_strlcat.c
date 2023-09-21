/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:57:20 by mvpee             #+#    #+#             */
/*   Updated: 2023/09/21 18:04:18 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	i;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size == 0 || size_dest > size)
		return (size + size_src);
	if (!*src)
		return (size_dest);
	while (src[i] && (i + size_dest < size - 1))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_src + size_dest);
}
