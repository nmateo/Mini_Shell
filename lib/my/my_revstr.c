/*
** EPITECH PROJECT, 2018
** Revstr
** File description:
** Reverse strings
*/

#include "../../include/our.h"

char *my_revstr(char *str)
{
    int i;
    int j;
    int temp;

    i = 0;
    j = 0;
    temp = 0;

    while (str[j] != '\0')
        j++;
    j--;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return (str);
}
