/*
** EPITECH PROJECT, 2024
** quit_press.c
** File description:
** quit_press.c
*/

#include "my.h"

int quit_press(zone_t *zone, window_t *window)
{
    sfRenderWindow_close(window->window);
    return 0;
}
