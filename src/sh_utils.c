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

int    create_sh(sh_t *shell, char **env)
{
    shell->default_pid = getpid();
    shell->env_vars = malloc(sizeof(rootev_t));
    shell->bool_command = 0;
    shell->env = my_env_copy(env);
    parse_env_path(shell);
    parse_env_home(shell);
    parse_env_pwd(shell);
    return (0);
}

int     loop_sh(sh_t *shell)
{
    char *line = NULL;
    size_t n = 0;
    while (1) {
        if (run_shell(*&line, *&n, shell) == -1)
            break;
    }
    return (0);
}

int     run_shell(char *line, size_t n, sh_t *shell)
{
    int j = 0;
    my_printf("\033[31;5;1;7m$");
    my_printf("\033[0m\033[31mP4C3SH3LL");
    my_printf("\033[0m >");
    j = getline(&line, &n, stdin);
    if (j == -1) {
        my_printf("\n");
        return (j);
    }
    else if (j != 1) {
        parse_commands(&line[0], shell);
    }
    return (j);
}
