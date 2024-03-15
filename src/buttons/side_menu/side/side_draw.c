/*
** EPITECH PROJECT, 2024
** side_draw.c
** File description:
** side_draw.c
*/

#include "my.h"

int side_draw(side_t *side, window_t *window)
{
    sfRectangleShape_setPosition(side->rect, zone_get_corner(window, zone_get(window->head, "side")));
    sfRenderWindow_drawRectangleShape(window->window, side->rect, NULL);
    return 0;
}
