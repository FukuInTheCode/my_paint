/*
** EPITECH PROJECT, 2024
** caca_draw.c
** File description:
** caca_draw.c
*/

#include "my.h"

int caca_draw(zone_t *zone, window_t *window)
{
    caca_t *caca = zone->extra_information;

    sfSprite_setPosition(caca->sprite, zone_get_corner(window, zone));
    sfRenderWindow_drawSprite(window->window, caca->sprite, NULL);
    return 0;
}
