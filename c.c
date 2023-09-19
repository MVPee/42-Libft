/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:42:54 by mvpee             #+#    #+#             */
/*   Updated: 2023/09/19 19:10:29 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    const char *src = "Bonjour, le monde!";
    char dest[50] = "Test ";

    // Utilisation de strdup pour dupliquer la chaîne originale
    strncat(dest, src, 5);

    printf("Chaîne originale : %s\n", src);
    printf("Chaîne dupliquée : %s\n", dest);

    return 0;
}