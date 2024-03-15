/*
** EPITECH PROJECT, 2024
** eraserzone_create.c
** File description:
** eraserzone_create.c
*/

#include "my.h"

zone_t *eraserzone_create(window_t *window)
{
    zone_t *zone = zone_create();
    eraser_t *eraser = eraser_create();

    zone->extra_information = (void *)eraser;
    zone->name = my_strdup("button_eraser");
    zone->depend_corner = UPPER_RIGHT;
    zone->depend_on = zone_get(window->head, "button_pencil");
    zone->priority = 2;
    zone->draw_f = eraserzone_draw;
    zone->size.x = 40;
    zone->size.y = 40;
    zone->adjust = (sfVector2f){20, 0};
    zone->free_f = eraser_destroy;
    zone->press_f = eraserzone_press;
    return zone;
}
