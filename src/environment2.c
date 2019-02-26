/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#include "../include/struct.h"
#include "../include/our.h"
#include "../include/my.h"

char    **add_env_var_content(char **env, char **typed_line)
{
    int i = 0;
    char **env_new;
    char *var_new;
    if ((i = var_checker(env, typed_line)) != -1) {
        var_new = my_varconcat(typed_line[1], typed_line[2]);
        env[i] = var_new;
    }
    else {
        env_new = my_env_copy_addline(env, typed_line);
        env = env_new;
    }
    return (env);
}

char    *my_varconcat(char *str1, char *str2)
{
    char *f = malloc(sizeof(char * ) * (my_strlen(str1) + my_strlen(str2) + 2));
    for (int i = 0; str1[i] != '\0'; i++) {
        f[i] = str1[i];
    }
    f[my_strlen(str1)] = '=';
    for (int i = 0; str2[i] != '\0'; i++) {
        f[i + my_strlen(str1) + 1] = str2[i];
    }
    f[my_strlen(str1) + my_strlen(str2) + 1] = '\0';
    return (f);
}

char    **add_env_var(char **env, char **typed_line)
{
    int i = 0;
    char **env_new;
    char *var_new;
    if ((i = var_checker(env, typed_line)) != -1) {
        var_new = my_var_reset(typed_line[1]);
        env[i] = var_new;
    }
    else {
        env_new = my_env_copy_addline_without_args(env, typed_line);
        env = env_new;
    }
    return (env);
}

char    *my_var_reset(char *typed_line)
{
    char *s = malloc(sizeof(char) * (my_strlen(typed_line)) + 2);
    my_strcpy(s, typed_line);
    s[my_strlen(typed_line)] = '=';
    s[my_strlen(typed_line) + 1] = '\0';
    return (s);
}

int     var_checker(char ** env, char **typed_line)
{
    int i = 0;
    for (; env[i]; i++) {
        if (my_varcmp(env[i], typed_line[1]) == 0) {
            return (i);
        }
    }
    return (-1);
}
