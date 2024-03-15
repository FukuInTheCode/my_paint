/*
** EPITECH PROJECT, 2024
** event_keypressed.c
** File description:
** event_keypressed.c
*/

#include "my.h"

int event_keypressed(window_t *window, sfEvent *event)
{
    if (event->key.code == sfKeyEscape)
        sfRenderWindow_close(window->window);
    return 0;
}
