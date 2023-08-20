/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-pee <mvan-pee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:56:08 by mvan-pee          #+#    #+#             */
/*   Updated: 2023/08/20 13:06:23 by mvan-pee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_bzero(void *ptr, size_t count)
{
	unsigned char	*p;
	size_t			i;

	p = ptr;
	i = 0;
	while (i < count)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
