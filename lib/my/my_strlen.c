/*
** EPITECH PROJECT, 2018
** Mystrln
** File description:
** gives str lenght
*/

#include "../../include/our.h"

int my_strlen(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        count = count + 1;
        i++;
    }
    return (count);
}
