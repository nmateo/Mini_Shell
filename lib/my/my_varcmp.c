/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#include "../../include/our.h"

int my_varcmp(char const *s1, char const *s2)
{
    int i = 0;
    while (s1[i] && s2[i]) {
        if (s1[i] != s2[i])
            return (1);
        i++;
    }
    if (s1[i] == '=')
        return (0);
    else
        return (1);
}