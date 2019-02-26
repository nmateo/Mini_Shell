/*
** EPITECH PROJECT, 2018
** myswap
** File description:
** swaps the content of twoo int
*/

#include "../../include/our.h"

void my_swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
