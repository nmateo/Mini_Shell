/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#include "../include/struct.h"
#include "../include/our.h"
#include "../include/my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    parse_env_path(sh_t *shell)
{
    int j = 0;
    int i = 0;
    int z = 0;
    char *replace;
    for (; shell->env[i]; i++) {
        if (shell->env[i][0] == 'P' && shell->env[i][1] == 'A' \
        && shell->env[i][2] == 'T' && shell->env[i][3] == 'H') {
            for (; shell->env[i][j] != '='; j++) {}
            replace = malloc(sizeof(char) * (my_strlen(shell->env[i]) - j + 1));
            j++;
            for (; shell->env[i][j] != '\0'; j++, z++)
                replace[z] = shell->env[i][j];
            replace[z] = '\0';
            shell->var_paths = my_str_to_word_arr(replace, ':');
            break;
        }
    }
}

void    parse_env_home(sh_t *shell)
{
    int j = 0;
    int i = 0;
    int z = 0;
    char *replace;
    for (; shell->env[i]; i++) {
        if (shell->env[i][0] == 'H' && shell->env[i][1] == 'O' \
        && shell->env[i][2] == 'M' && shell->env[i][3] == 'E') {
            for (; shell->env[i][j] != '='; j++) {}
            replace = malloc(sizeof(char) * (my_strlen(shell->env[i]) - j + 1));
            j++;
            for (; shell->env[i][j] != '\0'; j++, z++)
                replace[z] = shell->env[i][j];
            replace[z] = '\0';
            shell->home = my_str_to_word_arr(replace, ':');
            break;
        }
    }
}

void    parse_env_pwd(sh_t *shell)
{
    int j = 0;
    int i = 0;
    int z = 0;
    char *replace;
    for (; shell->env[i]; i++) {
        if (shell->env[i][0] == 'P' && shell->env[i][1] == 'D' \
        && shell->env[i][2] == 'D') {
            for (; shell->env[i][j] != '='; j++) {}
            replace = malloc(sizeof(char) * (my_strlen(shell->env[i]) - j + 1));
            j++;
            for (; shell->env[i][j] != '\0'; j++, z++)
                replace[z] = shell->env[i][j];
            replace[z] = '\0';
            shell->pwd = my_str_to_word_arr(replace, ':');
            break;
        }
    }
}