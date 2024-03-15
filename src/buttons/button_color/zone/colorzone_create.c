/*
** EPITECH PROJECT, 2024
** eraserzone_create.c
** File description:
** eraserzone_create.c
*/

#include "my.h"

zone_t *colorzone_create(window_t *window)
{
    zone_t *zone = zone_create();
    color_t *color = color_create();

    zone->extra_information = (void *)color;
    zone->name = my_strdup("button_color");
    zone->depend_corner = UPPER_RIGHT;
    zone->depend_on = zone_get(window->head, "button_bucket");
    zone->priority = 2;
    zone->draw_f = colorzone_draw;
    zone->size = (sfVector2f){sfSprite_getLocalBounds(color->sprite).width,
        sfSprite_getLocalBounds(color->sprite).height};
    zone->adjust = (sfVector2f){50, -15};
    zone->free_f = color_destroy;
    zone->press_f = colorzone_press;
    return zone;
}
