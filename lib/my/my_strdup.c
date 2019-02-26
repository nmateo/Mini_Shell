/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#include "../../include/our.h"

char	*my_strdup(char *str)
{
    char *s;
    if ((s = malloc(my_strlen(str))) == 0) {
        return (0);
    }
    my_strcpy(s, str);
    return (s);
}
