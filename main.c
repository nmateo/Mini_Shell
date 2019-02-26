/*
** EPITECH PROJECT, 2019
** Minishell#1
** File description:
** idk
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/struct.h"
#include "include/my.h"

int     main(int ac, char **av, char **env)
{
    (void)(ac);
    (void)(av);
    return (exec_sh(env));
}

int     exec_sh(char **env)
{
    sh_t *shell = malloc(sizeof(*shell));
    create_sh(shell, env);
    loop_sh(shell);
    return (0);
}
