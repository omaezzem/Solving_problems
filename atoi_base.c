/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:06:05 by omaezzem          #+#    #+#             */
/*   Updated: 2025/02/18 15:29:18 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_atoi_base
// Expected files   : ft_atoi_base.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef
// Those are, of course, to be trimmed according to the requested base. For
// example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are the first character of the
// string.

// Your function must be declared as follows:

// int	ft_atoi_base(const char *str, int str_base);

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

int    ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	res;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            res = res * str_base + str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            res = res * str_base + (str[i] - 'a' + 10);
        else if (str[i] >= 'A' && str[i] <= 'F')
            res = res * str_base + (str[i] - 'A' + 10);
        else
                break;
        i++;
    }
   return(res * sign);
}

int main()
{
    // Test cases
    const char *test_cases[] = {
        "10",      // Base 10 -> 10
        "-10",     // Base 10 -> -10
        "1010",    // Base 2 -> 10
        "A",       // Base 16 -> 10
        "1A",      // Base 16 -> 26
        "ff",      // Base 16 -> 255
        "-ff",     // Base 16 -> -255
        "123",     // Base 4  -> 27 (1*4^2 + 2*4^1 + 3*4^0)
        "7F",      // Base 16 -> 127
        "Z",       // Invalid character for any base <= 16
        "  -1A",   // Base 16 with spaces -> -26
        NULL
    };

    int bases[] = {10, 10, 2, 16, 16, 16, 16, 4, 16, 16, 16};

    for (int i = 0; test_cases[i] != NULL; i++)
    {
        int result = ft_atoi_base(test_cases[i], bases[i]);
        printf("ft_atoi_base(\"%s\", %d) = %d\n", test_cases[i], bases[i], result);
    }

    return 0;
}
