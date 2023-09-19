/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:42:54 by mvpee             #+#    #+#             */
/*   Updated: 2023/09/19 18:35:28 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char str1[] = "Hello";
    char *str2 = NULL;

    int result = memcmp(str1, str2, 5);

    if (result < 0) {
        printf("str1 est inférieur à str2\n");
    } else if (result == 0) {
        printf("str1 est égal à str2\n");
    } else {
        printf("str1 est supérieur à str2\n");
    }

    return 0;
}