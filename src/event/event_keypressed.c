/*
** EPITECH PROJECT, 2024
** event_keypressed.c
** File description:
** event_keypressed.c
*/

#include "my.h"
#include <SFML/Window/Keyboard.h>

int event_keypressed(window_t *window, sfEvent *event)
{
    if (event->key.code == sfKeyEscape)
        event_close(window, event);
    return 0;
}
