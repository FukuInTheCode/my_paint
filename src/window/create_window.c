/*
** EPITECH PROJECT, 2024
** create_window.c
** File description:
** create the window and display it
*/

#include "my.h"

int create_window(window_t *window)
{
    sfRenderWindow_setFramerateLimit(window->window, 60);
    while (sfRenderWindow_isOpen(window->window)) {
        gestion_window(window);
    }
    return 0;
}

int my_gimp(void)
{
    window_t window;

    if (init_struct_window(&window) == 84)
        return 84;
    if (create_window(&window) == 84)
        return 84;
    return 0;
}
