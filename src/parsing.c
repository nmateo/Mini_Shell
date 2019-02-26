/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#include "../include/struct.h"
#include "../include/our.h"
#include "../include/my.h"

int     parse_commands(char *line, sh_t *shell)
{
    char **line_words = my_str_to_word_arr(line, ' ');
    char cd_c[] = "cd";
    while (1) {
        if (my_strcmp(line_words[0], cd_c) == 0) {
            my_chdir(line_words, shell);
            break;
        }
        else if (parse_commands_2(line_words, shell) == 0) {
            break;
        }
        else
            search_for_binary(shell, line_words);
        break;
    }
    return (0);
}

int     parse_commands_2(char **typed_line, sh_t *shell)
{
    char exit_c[] = "exit";
    if (my_strcmp(typed_line[0], exit_c) == 0) {
        exit(0);
    }
    else if (parse_commands_3(typed_line, shell) == 0) {
        return (0);
    }
    return (1);
}

int     parse_commands_3(char **typed_line, sh_t *shell)
{
    char env_c[] = "env";
    if (my_strcmp(typed_line[0], env_c) == 0) {
        my_print_env(shell->env);
        return (0);
    }
    else if (parse_commands_4(typed_line, shell) == 0) {
        return (0);
    }
    return (1);
}

int     parse_commands_4(char **typed_line, sh_t *shell)
{
    char setenv_c[] = "setenv";
    char unsetenv_c[] = "unsetenv";
    if (my_strcmp(typed_line[0], unsetenv_c) == 0) {
        shell->env = my_unset_env(shell->env, typed_line);
        return (0);
    }
    else if (my_strcmp(typed_line[0], setenv_c) == 0) {
        shell->env = my_set_env(shell->env, typed_line);
        return (0);
    }
    return (1);
}