/*
** EPITECH PROJECT, 2018
** strncmp
** File description:
** strncmp
*/

#include "../../include/our.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
        i++;
    if (s1[i] != s2[i] && i < n)
        return (s1[i] - s2[i]);
    return (0);
}
