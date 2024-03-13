/*
** EPITECH PROJECT, 2024
** pencil_draw.c
** File description:
** pencil_draw.c
*/

#include "my.h"

int pencil_draw(pencil_t *pencil, window_t *window)
{
    sfVector2f corner_position =
        zone_get_corner(window, zone_get(window->head, "button_pencil"));

    corner_position.x += 20;
    corner_position.y += 30;
    sfRectangleShape_setPosition(pencil->rect, corner_position);
    sfSprite_setPosition(pencil->sprite, corner_position);
    sfRenderWindow_drawRectangleShape(window->window, pencil->rect, NULL);
    sfRenderWindow_drawSprite(window->window, pencil->sprite, NULL);
    return 0;
}
