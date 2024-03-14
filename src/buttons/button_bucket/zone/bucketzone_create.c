/*
** EPITECH PROJECT, 2024
** bucketzone_create.c
** File description:
** bucketzone_create.c
*/

#include "my.h"

zone_t *bucketzone_create(window_t *window)
{
    zone_t *zone = zone_create();
    bucket_t *bucket = bucket_create();

    zone->extra_information = (void *)bucket;
    zone->name = my_strdup("button_bucket");
    zone->depend_corner = UPPER_RIGHT;
    zone->depend_on = zone_get(window->head, "button_shapes");
    zone->priority = 2;
    zone->draw_f = bucketzone_draw;
    zone->size.x = 40;
    zone->size.y = 40;
    zone->adjust = (sfVector2f){20, 0};
    return zone;
}