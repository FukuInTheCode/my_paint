/*
** EPITECH PROJECT, 2024
** eraser_draw.c
** File description:
** eraser_draw.c
*/

#include "my.h"

int eraser_draw(eraser_t *eraser, window_t *window)
{
    sfVector2f corner_position =
        zone_get_corner(window, zone_get(window->head, "button_eraser"));

    sfRectangleShape_setPosition(eraser->rect, corner_position);
    sfSprite_setPosition(eraser->sprite, corner_position);
    sfRenderWindow_drawRectangleShape(window->window, eraser->rect, NULL);
    sfRenderWindow_drawSprite(window->window, eraser->sprite, NULL);
    return 0;
}
