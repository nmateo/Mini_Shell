/*
** EPITECH PROJECT, 2018
** Mystrcmp
** File description:
** compare str
*/

#include "../../include/our.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    if ((my_strlen(s1) - my_strlen(s2)) != 0)
        return (1);
    while (s1[i] && s2[i]) {
        if (s1[i] != s2[i])
            return (1);
        i++;
    }
    return (0);
}
