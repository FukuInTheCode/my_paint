/*
** EPITECH PROJECT, 2024
** shapeszone_create.c
** File description:
** shapeszone_create.c
*/

#include "my.h"

zone_t *shapeszone_create(window_t *window)
{
    zone_t *zone = zone_create();
    shape_t *shape = shapes_create();

    zone->extra_information = (void *)shape;
    zone->name = my_strdup("button_shapes");
    zone->depend_corner = UPPER_RIGHT;
    zone->depend_on = zone_get(window->head, "button_eraser");
    zone->priority = 2;
    zone->draw_f = shapeszone_draw;
    zone->size.x = 40;
    zone->size.y = 40;
    zone->adjust = (sfVector2f){20, 0};
    zone->free_f = shapes_destroy;
    zone->press_f = shapeszone_press;
    zone->hover_f = shapeszone_hover;
    return zone;
}
