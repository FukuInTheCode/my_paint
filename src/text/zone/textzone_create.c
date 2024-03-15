/*
** EPITECH PROJECT, 2024
** delimitatorzone_create.c
** File description:
** delimitatorzone_create.c
*/

#include "my.h"

zone_t *textzone_create(zone_t *depend_on)
{
    zone_t *zone = zone_create();
    text_t *text = text_create();
    sfFloatRect r = sfText_getLocalBounds(text->txt);

    zone->extra_information = (void *)text;
    zone->name = my_strdup("text");
    zone->depend_corner = UPPER_RIGHT;
    zone->depend_on = depend_on;
    zone->priority = 3;
    zone->draw_f = textzone_draw;
    zone->size = (sfVector2f){r.width, r.height};
    zone->adjust = (sfVector2f){20, 15};
    return zone;
}
