/*
** EPITECH PROJECT, 2024
** shapes_draw.c
** File description:
** shapes_draw.c
*/

#include "my.h"

int shapes_draw(shape_t *shape, window_t *window)
{
    sfVector2f corner_position =
            zone_get_corner(window, zone_get(window->head, "button_shapes"));

    sfRectangleShape_setPosition(shape->rect, corner_position);
    sfRenderWindow_drawRectangleShape(window->window, shape->rect, NULL);
    return 0;
}
