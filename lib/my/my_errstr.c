/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#include <unistd.h>
#include "../../include/our.h"

void my_putstr_err(char *str)
{
    write(2, str, my_strlen(str));
}
