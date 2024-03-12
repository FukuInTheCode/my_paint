/*
** EPITECH PROJECT, 2024
** zone_get_corner.c
** File description:
** zone_get_corner.c
*/

#include "my.h"

sfVector2f zone_get_corner(window_t *window, zone_t *current)
{
    sfVector2f vec = current->adjust;
    sfVector2f tmp = {0, 0};

    if (!current->depend_on) {
        vec.x += (sfRenderWindow_getSize(window->window).x - current->size.x) *
            (current->depend_corner == UPPER_RIGHT ||
            current->depend_corner == LOWER_RIGHT);
        vec.y += (sfRenderWindow_getSize(window->window).y - current->size.y) *
            (current->depend_corner == LOWER_RIGHT ||
            current->depend_corner == LOWER_LEFT);
        return vec;
    }
    tmp = zone_get_corner(window, current->depend_on);
    vec.x += tmp.x + current->depend_on->size.x *
        (current->depend_corner == UPPER_RIGHT ||
        current->depend_corner == LOWER_RIGHT);
    vec.y += tmp.y + current->depend_on->size.y *
        (current->depend_corner == LOWER_RIGHT ||
        current->depend_corner == LOWER_LEFT);
    return vec;
}
