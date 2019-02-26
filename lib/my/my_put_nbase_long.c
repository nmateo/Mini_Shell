/*
** EPITECH PROJECT, 2018
** Put longs nbr
** File description:
** idk
*/

#include "../../include/our.h"

int my_put_nbase_long(long nb, char *base, int ret)
{
    int sizebase = my_strlen(base);
    int mod = 0;

    if (nb < 0) {
        ret += my_putchar('-');
        nb = nb * -1;
    }
    else if (nb >= 0) {
        if (nb >= sizebase) {
            mod = (nb % sizebase);
            nb = (nb - mod) / sizebase;
            ret += my_put_nbase_long(nb, base, ret);
            ret += my_putchar(base[mod]);
        }
        else
            ret += my_putchar(base[nb % sizebase]);
    }
    return (ret);
}
