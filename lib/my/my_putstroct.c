/*
** EPITECH PROJECT, 2018
** Myputstr
** File description:
** put some str
*/

#include <stdlib.h>
#include "../../include/our.h"

int my_putstroct(char const *str)
{
    int ret = 0;
    int i = 0;
    int reste = 0;
    char *fin = malloc(sizeof(char) * 4);

    while (str[i] != '\0') {
        if (str[i] != '\0' && str[i] >= 32 && str[i] < 127) {
            ret = ret + my_putchar(str[i]);
        }
        else if (str[i] < 32 || str[i] >= 127) {
            ret = ret + norme0(str, i, fin, reste);
        }
        i++;
    }
    return (ret);
}

int norme0(char const *str, int i, char *fin, int reste)
{
    int ret = 0;
    int res = 0;
    int j = 0;

    my_putchar('\\');
    res = str[i];
    while (res >= 8) {
        reste = (res % 8);
        res = (res / 8);
        fin[j] = reste + 48;
        j++;
    }
    fin[j] = res + 48;
    my_revstr(fin);
    ret = ret + norme1(fin, ret);
    return (ret);
}

int norme1(char *fin, int ret)
{
    int toct = my_getnbr(fin);
    if (toct < 100)
        ret = ret + my_putchar('0');
    if (toct < 10)
        ret = ret + my_putchar('0');
    ret = ret + my_putstr(fin);
    return (ret);
}
