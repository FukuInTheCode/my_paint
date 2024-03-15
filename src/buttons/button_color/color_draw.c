/*
** EPITECH PROJECT, 2024
** eraser_draw.c
** File description:
** eraser_draw.c
*/

#include "my.h"

int color_draw(color_t *color, window_t *window)
{
    sfVector2f corner_position =
        zone_get_corner(window, zone_get(window->head, "button_color"));

    sfRectangleShape_setPosition(color->rect, corner_position);
    sfSprite_setPosition(color->sprite, corner_position);
    sfRenderWindow_drawRectangleShape(window->window, color->rect, NULL);
    sfRenderWindow_drawSprite(window->window, color->sprite, NULL);
    return 0;
}
