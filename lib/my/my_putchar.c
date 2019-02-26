/*
** EPITECH PROJECT, 2018
** myputchar
** File description:
** Put a char
*/

#include <unistd.h>
#include "../../include/our.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}
