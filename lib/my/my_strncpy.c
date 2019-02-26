/*
** EPITECH PROJECT, 2018
** Strncpy
** File description:
** Copy n car from a string to another.
*/

#include "../../include/our.h"

char *my_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (n > 0 && *(src + i)) {
        *(dest + i) = *(src + i);
        ++i;
        --n;
    }
    if (n > 0)
        *(dest + i) = '\0';
    return (dest);
}
