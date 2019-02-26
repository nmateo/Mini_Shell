/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct var_env_s venv_t;
struct var_env_s
{
    char *env_var;
    venv_t *next;
};

typedef struct var_env_root_s
{
    venv_t *start;
    venv_t *end;
}rootev_t;

typedef struct shell_s
{
    int default_pid;
    int fork_pid;
    char *current_folder;
    char **var_paths;
    int bool_command;
    int status;
    char **env;
    char **home;
    char **pwd;
    rootev_t *env_vars;
}sh_t;

#endif /* STRUCT_H_ */
