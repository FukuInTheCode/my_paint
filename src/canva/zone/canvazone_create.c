/*
** EPITECH PROJECT, 2024
** canvazone_create.c
** File description:
** canvazone_create.c
*/

#include "my.h"

zone_t *canvazone_create(void)
{
    zone_t *zone = zone_create();
    canva_t *canva = canva_create();
    layer_t *layer = layer_create();

    zone->extra_information = (void *)canva;
    canva_add_layer(canva, layer);
    zone->name = my_strdup("canva");
    zone->depend_corner = UPPER_LEFT;
    zone->draw_f = canvazone_draw;
    zone->free_f = canva_destroy;
    zone->hover_f = canvazone_hover;
    return zone;
}
