/*
** EPITECH PROJECT, 2024
** burger_draw.c
** File description:
** burger_draw.c
*/

#include "my.h"

int salad_hover(zone_t *zone, window_t *window)
{
    salad_t *salad = zone->extra_information;

    sfRectangleShape_setPosition(salad->rect, zone_get_corner(window, zone));
    sfText_setPosition(salad->text, zone_get_corner(window, zone));
    sfRectangleShape_setOutlineColor(salad->rect, sfBlue);
    sfRenderWindow_drawRectangleShape(window->window, salad->rect, NULL);
    sfRenderWindow_drawText(window->window, salad->text, NULL);
    sfRectangleShape_setOutlineColor(salad->rect, sfBlack);
    return 0;
}