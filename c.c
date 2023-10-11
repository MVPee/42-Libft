/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvpee <mvpee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:42:54 by mvpee             #+#    #+#             */
/*   Updated: 2023/10/11 15:18:49 by mvpee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
char custom_transform(unsigned int index, char character) {
    return (index % 2 == 0) ? ft_toupper(character) : ft_tolower(character);
}

int main() {
    const char *inputString = "SAOOOOOO";
    
    char *resultString = ft_strmapi(inputString, custom_transform);

    if (resultString) {
        printf("Chaîne d'entrée : %s\n", inputString);
        printf("Chaîne résultante : %s\n", resultString);
        free(resultString); // N'oubliez pas de libérer la mémoire allouée
    } else {
        printf("Erreur lors de la création de la nouvelle chaîne.\n");
    }

    return 0;
}