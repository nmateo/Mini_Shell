/*
** EPITECH PROJECT, 2019
** idj
** File description:
** idk
*/

#include "../include/struct.h"
#include "../include/our.h"
#include "../include/my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    **my_str_to_word_arr(char *s, char c)
{
    int nw = find_nb_words(s, c);
    int *size_words = find_words_size(s, c, nw);
    char **tab = malloc((nw + 1) * (sizeof(char * )));
    int i = 0;
    int j = 0;
    int z = 0;
    for (size_words[nw - 1] -= 1; s[i] == c || s[i] == '\t'; i++) {}
    for (; s[i] != '\0'; j = 0, z++, tab[nw] = NULL) {
        tab[z] = malloc(sizeof(char) * (size_words[z] + 1));
        while (s[i] != c && s[i] != '\0' && s[i] != '\n' && s[i] != '\t') {
            tab[z][j] = s[i];
            j++;
            i++;
        }
        tab[z][j] = '\0';
        while ((s[i] == c || s[i] == '\n' || s[i] == '\t') && s[i] != '\0') {
            i++;
        }
    }
    return (tab);
}

int     *find_words_size(char *s, int c, int nb_words)
{
    int *size_words = malloc(sizeof(int) * (nb_words));
    int i = 0;
    int j = 0;
    while (s[i] == c || s[i] == '\t')
        i++;
    while (s[i] != '\0') {
        size_words[j] = 0;
        while (s[i] != c && s[i] != '\n' && s[i] != '\t' && s[i] != '\0') {
            size_words[j]++;
            i++;
        }
        size_words[j]++;
        while ((s[i] == c || s[i] == '\n' || s[i] == '\t') && s[i] != '\0') {
            i++;
        }
        j++;
    }
    return (size_words);
}

int     find_nb_words(char *s, int c)
{
    int nb_words = 0;
    int i = 0;
    while ((s[i] == c || s[i] == '\t') && s[i] != '\0')
        i++;
    if (s[i] != '\0')
        nb_words++;
    while (s[i] != '\0') {
        if (s[i] == c || s[i] == '\t') {
            while (s[i] != '\0' && (s[i] == c || s[i] == '\t'))
                i++;
            if (s[i] != '\0' && s[i] != '\n')
                nb_words++;
        }
        i++;
    }
    return (nb_words);
}
