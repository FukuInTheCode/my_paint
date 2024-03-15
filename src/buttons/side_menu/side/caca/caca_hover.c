/*
** EPITECH PROJECT, 2024
** caca_hover.c
** File description:
** caca_hover.c
*/

#include "my.h"

int caca_hover(zone_t *zone, window_t *window)
{
    caca_t *c = zone->extra_information;
    sfColor col = sfSprite_getColor(c->sprite);

    sfSprite_setColor(c->sprite, (sfColor){108, 122, 137, 200});
    sfRenderWindow_drawSprite(window->window, c->sprite, NULL);
    sfSprite_setColor(c->sprite, col);
    return 0;
}
