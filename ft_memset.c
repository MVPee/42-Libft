/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-pee <mvan-pee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:21:03 by mvan-pee          #+#    #+#             */
/*   Updated: 2023/08/20 12:54:13 by mvan-pee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*p;
	size_t			i;

	p = ptr;
	i = 0;
	while (i < count)
	{
		p[i] = value;
		i++;
	}
	return (p);
}
