/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvan-pee <mvan-pee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:28:06 by mvpee             #+#    #+#             */
/*   Updated: 2023/10/31 13:15:01 by mvan-pee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_overflow(const char *str, int idx, int sign)
{
	int				count;
	unsigned long	result;

	count = 0;
	result = 0;
	while (str[idx + count] >= '0' && str[idx + count] <= '9')
	{
		count++;
		if (count > 19)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		result = result * 10 + (str[idx + count] - '0');
		if (result > LONG_MAX)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;
	int	i;
	int	overflow;

	sign = 1;
	result = 0;
	i = 0;
	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	overflow = check_overflow(nptr, i, sign);
	if (overflow != 1)
		return (overflow);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
