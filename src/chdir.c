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

int     my_chdir(char **typed_line, sh_t *shell)
{
    while (1) {
        if (typed_line[1] == NULL || typed_line[1][0] == '~') {
            chdir(shell->home[0]);
            break;
        }
        else if (chdir(typed_line[1]) == -1)
            my_printf("%s: Permission denied.\n", typed_line[1]);
        break;
    }
    return (0);
}
