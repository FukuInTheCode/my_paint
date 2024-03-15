/*
** EPITECH PROJECT, 2024
** create_window.c
** File description:
** create the window and display it
*/

#include "my.h"

int create_window(window_t *window, sfEvent *event)
{
    sfRenderWindow_setFramerateLimit(window->window, 60);
    while (sfRenderWindow_isOpen(window->window)) {
        gestion_event(window, event);
        gestion_window(window);
    }
    return 0;
}

int my_gimp(void)
{
    window_t window;
    sfEvent event;

    srand(time(0));
    if (init_struct_window(&window) == 84)
        return 84;
    if (create_window(&window, &event) == 84)
        return 84;
    megatron_free(&window);
    return 0;
}
