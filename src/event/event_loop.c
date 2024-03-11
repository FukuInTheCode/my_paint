/*
** EPITECH PROJECT, 2024
** event_loop.c
** File description:
** event_loop.c
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
