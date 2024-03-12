/*
** EPITECH PROJECT, 2024
** burger_draw.c
** File description:
** burger_draw.c
*/

#include "my.h"

int salad_draw(zone_t *zone, window_t *window)
{
    salad_t *salad = zone->extra_information;

    sfRectangleShape_setOrigin(salad->rect, zone_get_corner(window, zone));
    sfText_setOrigin(salad->text, zone_get_corner(window, zone));
    sfRenderWindow_drawRectangleShape(window->window, salad->rect, NULL);
    sfRenderWindow_drawText(window->window, salad->text, NULL);
    return 0;
}
