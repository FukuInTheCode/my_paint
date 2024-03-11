/*
** EPITECH PROJECT, 2024
** gestion_of_window.c
** File description:
** is the gestion of the window
*/

#include "my.h"

int gestion_window(window_t *window)
{
    sfRenderWindow_clear(window->window, sfBlack);
    sfRenderWindow_display(window->window);
    return 0;
}
