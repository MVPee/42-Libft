/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:21:03 by mvan-pee          #+#    #+#             */
/*   Updated: 2023/08/27 11:38:32 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*p;
	size_t			i;

	if(!ptr)
		return NULL;
	p = ptr;
	i = 0;
	while (i < count)
	{
		p[i] = value;
		i++;
	}
	return (p);
}
