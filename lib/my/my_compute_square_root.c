/*
** EPITECH PROJECT, 2018
** squareroot
** File description:
** calculate square root
*/

#include "../../include/our.h"

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb < 0)
        return (0);
    while ((i * i) != nb) {
        if ((i * i) > nb) {
            return (0);
        }
        i = i + 1;
    }
    return (i);
}
