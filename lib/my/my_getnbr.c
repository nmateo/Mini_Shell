/*
** EPITECH PROJECT, 2018
** getnbr
** File description:
** Get a nbr
*/

#include "../../include/our.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int n = 0;
    if (str[0] == '-' && str[1] != '\0')
        i++;
    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9')) {
            n /= 10;
            break;
        }
        n = n + str[i] - 48;
        if (str[i + 1] != '\0')
            n = n * 10;
        i++;
    }
    if (str[0] == '-')
        return (-1 * n);
    else
        return (n);
}
