/*
** EPITECH PROJECT, 2019
** idk
** File description:
** idk
*/

#ifndef MY_H_
#define MY_H_

#include "struct.h"


int     exec_sh(char **env);
int     create_sh(sh_t *shell, char **env);
int     loop_sh(sh_t *shell);
int     free_sh(sh_t *shell);
int     run_shell(char *line, size_t n, sh_t *shell);

int     parse_commands(char *line, sh_t *shell);
int     parse_commands_2(char **typed_line, sh_t *shell);
int     parse_commands_3(char **typed_line, sh_t *shell);
int     parse_commands_4(char **typed_line, sh_t *shell);
void    parse_env_path(sh_t *shell);
void    parse_env_home(sh_t *shell);
void    parse_env_pwd(sh_t *shell);

char    **my_env_copy(char **env);
void    my_print_env(char **env);
char    **my_set_env(char **env, char **typed_line);
char    **my_env_copy_addline(char **env, char **typed_line);
char    **add_env_var(char **env, char **typed_line);
char    **add_env_var_content(char **env, char **typed_line);
char    **my_unset_env(char **env, char ** typed_line);
char    *my_varconcat(char *str1, char *str2);
int     var_checker(char ** env, char **typed_line);
char    *my_var_reset(char *typed_line);
char    **my_env_copy_addline_without_args(char **env, char **typed_line);
char **my_unsetenv_copy(char **env, int minus_size, char **typed_line, int k);


int     search_for_binary(sh_t *shell, char **line_words);
int     exec_binary(sh_t *shell, char *f, char **words);

int     find_nb_words(char *str, int c);
int     *find_words_size(char *str, int c, int nb_words);
char    **my_str_to_word_arr(char *s, char c);

int     my_chdir(char **typed_lin, sh_t *shell);

char    *my_strconcat(char *str1, char *str2);
char    *my_strconcat_args(char **line_words);
#endif /* MY_H_ */