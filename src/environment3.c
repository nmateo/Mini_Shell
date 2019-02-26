/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#include "../include/struct.h"
#include "../include/our.h"
#include "../include/my.h"

char    **my_env_copy_addline_without_args(char **env, char **typed_line)
{
    int s = 0;
    for (; env[s]; s++) {}
    char **env_copy = malloc(sizeof(char *) * (s + 2));
    for (int i = 0; env[i]; i++) {
        env_copy[i] = malloc(sizeof(char) * (my_strlen(env[i]) + 1));
        my_strcpy(env_copy[i], env[i]);
    }
    env_copy[s] = my_var_reset(typed_line[1]);
    env_copy[s + 1] = NULL;
    return (env_copy);
}

char    **my_env_copy_addline(char **env, char **typed_line)
{
    int s = 0;
    for (; env[s]; s++) {}
    char **env_copy = malloc(sizeof(char *) * (s + 2));
    for (int i = 0; env[i]; i++) {
        env_copy[i] = malloc(sizeof(char) * (my_strlen(env[i]) + 1));
        my_strcpy(env_copy[i], env[i]);
    }
    env_copy[s] = my_varconcat(typed_line[1], typed_line[2]);
    env_copy[s + 1] = NULL;
    return (env_copy);
}