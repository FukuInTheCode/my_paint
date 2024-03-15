/*
** EPITECH PROJECT, 2024
** shapeszone_press.c
** File description:
** shapeszone_press.c
*/

#include "my.h"

int shapeszone_press(zone_t *zone, window_t *window)
{
    zone_t *canvazone = zone_get(window->head, "canva");
    canva_t *canva = canvazone->extra_information;

    if (canva->mode != CIRCLE) {
        canva->use_f = layer_draw_circle;
        canva->mode = CIRCLE;
    } else {
        canva->use_f = layer_draw_rect;
        canva->mode = RECT;
    }
    return 0;
}
