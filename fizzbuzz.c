/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:16:53 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/22 15:16:53 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Assignment name  : fizzbuzz
// Expected files   : fizzbuzz.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that prints the numbers from 1 to 100, each separated by a
// newline.

// If the number is a multiple of 3, it prints 'fizz' instead.

// If the number is a multiple of 5, it prints 'buzz' instead.

// If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

// Example:

// $>./fizzbuzz
// 1
// 2
// fizz
// 4
// buzz
// fizz
// 7
// 8
// fizz
// buzz
// 11
// fizz
// 13
// 14
// fizzbuzz
// [...]
// 97
// 98
// fizz
// buzz
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

#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int nb) {

	if (nb >= 10) {
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10) 
        ft_putchar(nb + 48);
}
int main()
{
    int i;
    int mia = 100;
    i = 1;
    while (mia >= i)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else if (i % 5 == 0)
            write (1, "buzz\n", 5);
        else 
        {
            ft_putnbr(i);
            write (1, "\n", 1);
        }
        i++;
    }
}