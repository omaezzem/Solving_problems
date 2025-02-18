/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snack_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:24:16 by omaezzem          #+#    #+#             */
/*   Updated: 2025/02/18 15:21:07 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Assignment name  : snake_to_camel
// Expected files   : snake_to_camel.c
// Allowed functions: malloc, free, realloc, write
// --------------------------------------------------------------------------------

// Write a program that takes a single string in snake_case format
// and converts it into a string in lowerCamelCase format.

// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".

// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.

// Examples:
// $>./snake_to_camel "here_is_a_snake_case_word"
// hereIsASnakeCaseWord
// $>./snake_to_camel "hello_world" | cat -e
// helloWorld$
// $>./snake_to_camel | cat -e
// $

// result 👇🏼

        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||
        // ||


#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] == '_')
            {
                if (av[1][i+1] >= 'a' && av[1][i+1] <= 'z')
                {
                    av[1][i+1] -= 32;
                    write(1, &av[1][i+1], 1);
                }
                i++;
            }
            else 
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}
