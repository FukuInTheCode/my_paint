/*
** EPITECH PROJECT, 2024
** create_window.c
** File description:
** create the window and display it
*/

#include "my.h"

int gestion_event(window_t *window, sfEvent *event)
{
    while (sfRenderWindow_pollEvent(window->window, event)) {
        if (event->type == sfEvtClosed)
            sfRenderWindow_close(window->window);
        if (event->type == sfEvtKeyPressed && event->key.code == sfKeyEscape)
            sfRenderWindow_close(window->window);
    }
    return 0;
}

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

    if (init_struct_window(&window) == 84)
        return 84;
    if (create_window(&window, &event) == 84)
        return 84;
    megatron_free(&window);
    return 0;
}
