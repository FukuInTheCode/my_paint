/*
** EPITECH PROJECT, 2024
** event_close.c
** File description:
** event_close.c
*/

#include "my.h"

int event_close(window_t *window, sfEvent *event)
{
    sfRenderWindow_close(window->window);
    return 0;
}
