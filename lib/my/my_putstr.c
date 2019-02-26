/*
** EPITECH PROJECT, 2018
** Myputstr
** File description:
** put some str
*/

#include "../../include/our.h"

int my_putstr(char const *str)
{
    int ret = 0;
    for (int i = 0;str[i] != '\0'; i++) {
        my_putchar(str[i]);
        ret += 1;
    }
    return (ret);
}
