/*
** EPITECH PROJECT, 2018
** Strupcase
** File description:
** Put letters in uppercase
*/

#include "../../include/our.h"

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}
