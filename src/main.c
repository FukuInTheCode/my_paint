/*
** EPITECH PROJECT, 2024
** main.c
** File description:
** main.c
*/

#include "my.h"

static int is_env_good(char **envp)
{
    for (int i = 0; envp[i]; i++) {
        if (my_strncmp("DISPLAY", envp[i], 6) == 0)
            return 0;
    }
    return 84;
}

int main(int argc, char **argv, char **envp)
{
    int error = 0;

    if (is_env_good(envp) == 84)
        return 84;
    error = display_help(argc, argv, "src/assets/help.txt");
    if (error == 1)
        return 0;
    if (error == 84)
        return 84;
    if (argc != 1)
        return 84;
    if (my_gimp() == 84)
        return 84;
    return 0;
}
