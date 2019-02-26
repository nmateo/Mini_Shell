/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#include <stdarg.h>
#include <stdlib.h>

#ifndef OUR_H_
#define OUR_H_

int     my_strlen(char const *str);
int     my_compute_power_rec(int nb, int p);
int     my_compute_square_root(int nb);
int     my_getnbr(char const *str);
int     my_isneg(int nbr);
int     my_p_buint(unsigned int nb, char *base, int ret);
int     my_printf(char *browse, ...);
int     norme(int i, const char *browse, va_list arg);
int     flags0(int i, const char *browse, va_list arg);
int     flags1(int i, const char *browse, va_list arg);
int     flags2(int i, const char *browse, va_list arg);
int     my_put_nbase_long(long nb, char *base, int ret);
int     my_put_nbase_uint(unsigned int nb, char *base, int ret);
int     my_put_nbr(int nb, int ret);
int     my_putchar(char c);
int     my_putstr(char const *str);
int     my_putstroct(char const *str);
int     norme0(char const *str, int i, char *fin, int reste);
int     norme1(char *fin, int ret);
char    *my_revstr(char *str);
int     my_varcmp(char const *s1, char const *s2);
int     my_strcmp(char const *s1, char const *s2);
char    *my_strcpy(char *dest, char const *src);
char	*my_strdup(char *str);
int     my_strlen(char const *str);
char    *my_strlowcase(char *str);
int     my_strncmp(char const *s1, char const *s2, int n);
char    *my_strncpy(char *dest, char *src, int n);
char    *my_strupcase(char *str);
void    my_swap(int *a, int *b);
void    my_putstr_err(char *str);

#endif /* OUR_H_ */

