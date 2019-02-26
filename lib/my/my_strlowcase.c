/*
** EPITECH PROJECT, 2018
** Strlowcase
** File description:
** Put letters in lowercase
*/

#include "../../include/our.h"

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}
