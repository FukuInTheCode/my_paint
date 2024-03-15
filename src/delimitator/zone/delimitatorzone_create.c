/*
** EPITECH PROJECT, 2024
** delimitatorzone_create.c
** File description:
** delimitatorzone_create.c
*/

#include "my.h"

zone_t *delimitatorzone_create(void)
{
    zone_t *zone = zone_create();
    delimitator_t *delimitator = delimitator_create();

    zone->extra_information = (void *)delimitator;
    zone->name = my_strdup("delimitator");
    zone->depend_corner = UPPER_LEFT;
    zone->depend_on = NULL;
    zone->priority = 1;
    zone->draw_f = delimitatorzone_draw;
    zone->size = (sfVector2f) {1930, 120};
    zone->free_f = delimitator_destroy;
    return zone;
}
