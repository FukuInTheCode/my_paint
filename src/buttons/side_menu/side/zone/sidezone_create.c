/*
** EPITECH PROJECT, 2024
** sidezone_create.c
** File description:
** sidezone_create.c
*/

#include "my.h"

zone_t *sidezone_create(window_t *window)
{
    zone_t *zone = zone_create();
    side_t *side = side_create();

    zone->extra_information = (void *)side;
    zone->name = my_strdup("side");
    zone->depend_corner = UPPER_LEFT;
    zone->depend_on = NULL;
    zone->priority = 2;
    zone->draw_f = sidezone_draw;
    zone->size = (sfVector2f){100, 40};
    zone->adjust = (sfVector2f){0, 100};
    return zone;
}