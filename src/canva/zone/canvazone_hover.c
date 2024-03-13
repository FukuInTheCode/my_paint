/*
** EPITECH PROJECT, 2024
** canvazone_hover.c
** File description:
** canvazone_hover.c
*/

#include "my.h"

int canvazone_hover(zone_t *zone, window_t *window)
{
    sfVector2i m = sfMouse_getPositionRenderWindow(window->window);
    canva_t *canva = zone->extra_information;

    return layer_use(canva->main, window, (sfVector2f){m.x, m.y}, canva);
}
