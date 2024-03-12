/*
** EPITECH PROJECT, 2024
** event_loop.c
** File description:
** event_loop.c
*/

#include "my.h"

static int check_event(window_t *window, sfEvent *event)
{
    for (int i = 0; events[i].f; i++)
        if (events[i].type == event->type)
            return events[i].f(window, event);
    return 0;
}

int gestion_event(window_t *window, sfEvent *event)
{
    while (sfRenderWindow_pollEvent(window->window, event))
        check_event(window, event);
    return 0;
}
