/*
** EPITECH PROJECT, 2018
** Putnbr
** File description:
** Put nbrs
*/

#include "../../include/our.h"

int my_put_nbr(int nb, int ret)
{
    int mod = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            mod = (nb % 10);
            nb = (nb - mod) / 10;
            ret += my_put_nbr(nb, ret);
            ret += my_putchar(48 + mod);
        }
        else
            ret += my_putchar(48 + nb % 10);
    }
    return (ret);
}
