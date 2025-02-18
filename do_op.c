/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:30:23 by omaezzem          #+#    #+#             */
/*   Updated: 2025/02/18 15:27:31 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// Assignment name  : do_op
// Expected files   : do_op.c
// Allowed functions: atoi, printf, write
// --------------------------------------------------------------------------------

// Write a program that takes three strings:
// - The first and the third one are representations of base-10 signed integers
//   that fit in an int.
// - The second one is an arithmetic operator chosen from: + - * / %

// The program must display the result of the requested arithmetic operation,
// followed by a newline. If the number of parameters is not 3, the program
// just displays a newline.

// You can assume the string have no mistakes or extraneous characters. Negative
// numbers, in input or output, will have one and only one leading '-'. The
// result of the operation fits in an int.

// Examples:

// $> ./do_op "123" "*" 456 | cat -e
// 56088$
// $> ./do_op "9828" "/" 234 | cat -e
// 42$
// $> ./do_op "1" "+" "-43" | cat -e
// -42$
// $> ./do_op | cat -e
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

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int j = 0;
    int nb1;
    int nb2;
    int res;

    if (ac == 4)
    {
        nb1 = atoi(av[1]);
        nb2 = atoi(av[3]);
        if (av[2][j]  == '/')
        {
            res = nb1 / nb2;
            printf("%d\n", res);
        }
        else if (av[2][j] == '*')
        {
            res = nb1 * nb2;
            printf("%d\n", res);
        }
        else if (av[2][j] == '+')
        {
            res = nb1 + nb2;
            printf("%d\n", res);
        }
        else if (av[2][j] == '-')
        {
            res = nb1 - nb2;
            printf("%d\n", res);
        }
        else if (av[2][j] == '%')
        {
            res = nb1 % nb2;
            printf("%d\n", res);
        }
    }
    else
        write (1, "\n", 1);
}