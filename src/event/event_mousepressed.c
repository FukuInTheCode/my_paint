/*
** EPITECH PROJECT, 2024
** event_mousepressed.c
** File description:
** event_mousepressed.c
*/

#include "my.h"

int event_mousepressed(window_t *window, sfEvent *event)
{
    zone_get_mouse(window->head, window,
        (sfVector2f){event->mouseButton.x, event->mouseButton.y});
    return 0;
}
