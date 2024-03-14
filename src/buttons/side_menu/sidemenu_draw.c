/*
** EPITECH PROJECT, 2024
** sidemenu_draw.c
** File description:
** sidemenu_draw.c
*/

#include "my.h"

int sidemenu_draw(sidemenu_t *sidemenu, window_t *window)
{
    sfVector2f corner_position =
            zone_get_corner(window, zone_get(window->head, "button_shapes"));

    sfRectangleShape_setPosition(sidemenu->rect, corner_position);
    sfRenderWindow_drawRectangleShape(window->window, sidemenu->rect, NULL);
    return 0;
}
