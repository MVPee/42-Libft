/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:56:08 by mvan-pee          #+#    #+#             */
/*   Updated: 2023/08/27 11:38:29 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, size_t count)
{
	unsigned char	*p;
	size_t			i;

	if(!ptr)
		return NULL;
	p = ptr;
	i = 0;
	while (i < count)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
