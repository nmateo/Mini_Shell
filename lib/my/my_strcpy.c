/*
** EPITECH PROJECT, 2018
** Strcpy
** File description:
** Copy strings into another.
*/

#include "../../include/our.h"

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
