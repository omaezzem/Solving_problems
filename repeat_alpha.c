/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:21:55 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/22 15:21:55 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>


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
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    i = 1;
    int sub;
    if (ac == 2)
    {
        int j = 0;
        while (av[i][j])
        {
            if (av[i][j] >= 'A' && av[i][j] <= 'Z')
            {
                sub = av[i][j] - 'A' + 1;
                while (sub > 0)
                {
                    write (1, &av[i][j], 1);
                    sub--;
                }
            }
            else if (av[i][j] >= 'a' && av[i][j] <= 'z')
            {
                sub = av[i][j] - 'a' + 1;
                while (sub > 0)
                {
                    write (1, &av[i][j], 1);
                    sub--;
                }
            }
            else 
                write (1, &av[i][j], 1);
            j++;
        }
        write (1, "\n", 1);
    }
}