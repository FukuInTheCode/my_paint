/*
** EPITECH PROJECT, 2024
** pencilzone_create.c
** File description:
** pencilzone_create.c
*/

#include "my.h"

zone_t *pencilzone_create(window_t *window)
{
    zone_t *zone = zone_create();
    pencil_t *pencil = pencil_create();

    zone->extra_information = (void *)pencil;
    zone->name = my_strdup("button_pencil");
    zone->depend_corner = UPPER_RIGHT;
    zone->depend_on = zone_get(window->head, "burger");
    zone->priority = 1;
    zone->draw_f = pencilzone_draw;
    zone->size.x = 40;
    zone->size.y = 40;
    return zone;
}
