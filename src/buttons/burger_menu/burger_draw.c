/*
** EPITECH PROJECT, 2024
** burger_draw.c
** File description:
** burger_draw.c
*/

#include "my.h"

int burger_draw(burger_t *burger, window_t *window)
{
    if (burger->is_clicked)
        sfRectangleShape_setOutlineColor(burger->rect, sfRed);
    else
        sfRectangleShape_setOutlineColor(burger->rect, sfBlack);
    sfRectangleShape_setPosition(burger->rect, zone_get_corner(window,
        zone_get(window->head, "burger")));
    sfRenderWindow_drawRectangleShape(window->window, burger->rect, NULL);
    return 0;
}
