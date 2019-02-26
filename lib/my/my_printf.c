/*
** EPITECH PROJECT, 2018
** idk
** File description:
** idk
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../../include/our.h"

int my_printf(char *browse, ...)
{
    va_list arg;
    int i = 0;
    int r = 0;

    va_start(arg, browse);
    while (browse[i] != '\0') {
        if (browse[i] == '%') {
            i++;
            r += norme(i, browse, arg);
        }
        else if (browse[i] != '%')
            r += my_putchar(browse[i]);
        i++;
    }
    va_end(arg);
    return (r);
}

int norme(int i, const char *browse, va_list arg)
{
    int ret = 0;
    int ret0 = 0;
    int ret1 = 0;
    int ret2 = 0;

    ret0 += flags0(i, browse, arg);
    ret1 += flags1(i, browse, arg);
    ret2 += flags2(i, browse, arg);
    ret = ret0 + ret1 + ret2;
    return (ret);
}

int flags0(int i, const char *browse, va_list arg)
{
    int ret0 = 0;

    switch (browse[i]) {
    case 'c' :
        ret0 += my_putchar(va_arg(arg, int));
        break;
    case 's' :
        ret0 += my_putstr(va_arg(arg, char *));
        break;
    case 'S' :
        ret0 += my_putstroct(va_arg(arg, char *));
        break;
    case '%' :
        ret0 += my_putchar('%');
        break;
    case 'b' :
        ret0 += my_p_buint(va_arg(arg, unsigned int), "01", 0);
        break;
    }
    return (ret0);
}

int flags1(int i, const char *browse, va_list arg)
{
    int r = 0;

    switch (browse[i]) {
    case 'o' :
        r += my_p_buint(va_arg(arg, unsigned int), "01234567", 0);
        break;
    case 'u' :
        r += my_p_buint(va_arg(arg, unsigned int), "0123456789", 0);
        break;
    case 'x' :
        r += my_p_buint(va_arg(arg, unsigned int), "0123456789abcdef", 0);
        break;
    case 'X' :
        r += my_p_buint(va_arg(arg, unsigned int), "0123456789ABCDEF", 0);
        break;
    }
    return (r);
}

int flags2(int i, const char *browse, va_list arg)
{
    int r = 0;

    switch (browse[i]) {
    case 'p' :
        r += my_putstr("0x");
        r += my_put_nbase_long(va_arg(arg, long), "0123456789abcdef", 0);
        break;
    case 'd' :
        r += my_put_nbr(va_arg(arg, int), 0);
        break;
    case 'i' :
        r += my_put_nbr(va_arg(arg, int), 0);
        break;
    case 'm' :
        r += my_putstr("Success");
        break;
    }
    return (r);
}
