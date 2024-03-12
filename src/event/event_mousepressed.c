/*
** EPITECH PROJECT, 2024
** event_mousepressed.c
** File description:
** event_mousepressed.c
*/

#include "my.h"

int event_mousepressed(window_t *window, sfEvent *event)
{
    zone_t *clicked = zone_get_mouse(window->head, window,
        (sfVector2f){event->mouseButton.x, event->mouseButton.y});

    if (!clicked)
        return 0;
    if (clicked->press_f)
        clicked->press_f(clicked, window);
    return 0;
}
