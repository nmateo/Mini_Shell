/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#include "../include/struct.h"
#include "../include/our.h"
#include "../include/my.h"
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <string.h>

int     search_for_binary(sh_t *shell, char **line_words)
{
    struct stat st;
    int j = 0;
    if (stat(line_words[0], &st) != -1) {
        exec_binary(shell, line_words[0], line_words);
        wait(&j);
    }
    else {
        for (int i = 0; shell->var_paths[i]; i++) {
            char *fpath = my_strconcat(shell->var_paths[i], line_words[0]);
            if (stat(fpath, &st) != -1) {
                exec_binary(shell, fpath, line_words);
                shell->bool_command = 1;
                break;
            }
        }
        (shell->bool_command != 1) ? my_printf("%s: Command not found.\n", \
        line_words[0]), shell->bool_command = 0:0;
    }
    return (0);
}

char    *my_strconcat(char *str1, char *str2)
{
    char *f = malloc(sizeof(char * ) * (my_strlen(str1) + my_strlen(str2) + 2));
    for (int i = 0; str1[i] != '\0'; i++) {
        f[i] = str1[i];
    }
    f[my_strlen(str1)] = '/';
    for (int i = 0; str2[i] != '\0'; i++) {
        f[i + my_strlen(str1) + 1] = str2[i];
    }
    f[my_strlen(str1) + my_strlen(str2) + 1] = '\0';
    return (f);
}

int     exec_binary(sh_t *shell, char *f, char **words)
{
    fork();
    if (shell->default_pid != getpid()) {
        execve(f, words, shell->env);
    }
    wait(&shell->status);
    if (!WIFSIGNALED(shell->status))
        return (0);
    if (WIFSIGNALED(shell->status) == 1 && WTERMSIG(shell->status) == SIGSEGV) {
        my_putstr_err("Segmentation fault\n");
        return (0);
    }
    if (WIFSIGNALED(shell->status) == 1 && WTERMSIG(shell->status) == 8) {
        my_putstr_err("Floating exception\n");
        return (0);
    }
    else {
        my_printf("%s: %s.\n", words[0], strsignal(WTERMSIG(shell->status)));
    }
    return (0);
}