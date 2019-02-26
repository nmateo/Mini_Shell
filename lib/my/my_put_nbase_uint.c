/*
** EPITECH PROJECT, 2018
** Put binary nbr from dec nbr
** File description:
** idk
*/

#include "../../include/our.h"

int my_put_nbase_uint(unsigned int nb, char *base, int ret)
{
    int sizebase = my_strlen(base);
    int mod = 0;
    int nba = nb;

    if (nba >= sizebase) {
        mod = (nb % sizebase);
        nb = (nb - mod) / sizebase;
        ret += my_put_nbase_uint(nb, base, ret);
        ret += my_putchar(base[mod]);
    }
    else
        ret += my_putchar(base[nb % sizebase]);
    return (ret);
}
