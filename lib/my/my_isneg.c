/*
** EPITECH PROJECT, 2018
** isneg
** File description:
** find if it's neg or pos
*/

#include "../../include/our.h"

int my_isneg(int nbr)
{
    if (nbr < 0) {
        my_putchar('N');
        my_putchar('\n');
    }
    else {
        my_putchar('P');
        my_putchar('\n');
    }
    return (0);
}
