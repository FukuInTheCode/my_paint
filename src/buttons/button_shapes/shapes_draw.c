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
    sfVector2f corner_position_circle =
        (sfVector2f){corner_position.x + 3, corner_position.y +3};
    sfVector2f corner_position_rectangle =
        (sfVector2f){corner_position.x + 12, corner_position.y + 15};

    sfRectangleShape_setPosition(shape->rect, corner_position);
    sfCircleShape_setPosition(shape->circle, corner_position_circle);
    sfRectangleShape_setPosition(shape->rect_inside,
        corner_position_rectangle);
    sfRenderWindow_drawRectangleShape(window->window, shape->rect, NULL);
    sfRenderWindow_drawCircleShape(window->window, shape->circle, NULL);
    sfRenderWindow_drawRectangleShape(window->window,
        shape->rect_inside, NULL);
    return 0;
}
