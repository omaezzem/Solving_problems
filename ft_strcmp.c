/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:16:45 by omaezzem          #+#    #+#             */
/*   Updated: 2025/02/18 15:26:05 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).

// Your function must be declared as follows:

// int    ft_strcmp(char *s1, char *s2);

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

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i] && (s1[i] == s2[i]))
        i++;
    return (s1[i] - s2[i]);
}