/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#include "../include/struct.h"
#include "../include/our.h"
#include "../include/my.h"

void    my_print_env(char **env)
{
    for (int i = 0; env[i]; i++)
        my_printf("%s\n", env[i]);
}

char    **my_set_env(char **env, char **typed_line)
{
    int i = 0;
    for (; typed_line[i]; i++) {}
    switch (i) {
        case 1:
            my_print_env(env);
            break;
        case 2:
            env = add_env_var(env, typed_line);
            break;
        case 3:
            env = add_env_var_content(env, typed_line);
            break;
        default:
            my_putstr_err("setenv: Too many arguments.\n");
            break;
    }
    return (env);
}

char    **my_unset_env(char **env, char ** typed_line)
{
    int i = 0;
    int j = 0;
    int minus_size = 0;
    for (; env[i]; i++) {
        for (j = 0; typed_line[j]; j++) {
            if (my_varcmp(env[i], typed_line[j]) == 0)
                minus_size++;
        }
    }
    char **env_copy = my_unsetenv_copy(env, minus_size, typed_line, i);
    return (env_copy);
}

char    **my_unsetenv_copy(char **env, int minus_size, char **typed_line, int k)
{
    int j = 0;
    int z = 0;
    int cpy = 0;
    char **env_copy = malloc(sizeof(char * ) * (k - minus_size + 1));
    for (int i = 0; env[i]; i++) {
        for (j = 0; typed_line[j]; j++) {
            if (my_varcmp(env[i], typed_line[j]) == 0)
                cpy = 1;
        }
        if (cpy == 0) {
            env_copy[z] = malloc(sizeof(char) * (my_strlen(env[i]) + 1));
            my_strcpy(env_copy[z], env[i]);
            z++;
        }
        cpy = 0;
    }
    env_copy[k - minus_size] = NULL;
    return (env_copy);
}

char    **my_env_copy(char **env)
{
    int s = 0;
    for (; env[s]; s++) {}
    char **env_copy = malloc(sizeof(char *) * (s));
    for (int i = 0; env[i]; i++) {
        env_copy[i] = malloc(sizeof(char) * (my_strlen(env[i]) + 1));
        my_strcpy(env_copy[i], env[i]);
    }
    env_copy[s - 1] = NULL;
    return (env_copy);
}
