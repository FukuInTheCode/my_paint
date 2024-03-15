/*
** EPITECH PROJECT, 2024
** pencil_press.c
** File description:
** pencil_press.c
*/

#include "my.h"

int eraser_burger_press(zone_t *zone, window_t *window)
{
    zone_t *canvazone = zone_get(window->head, "canva");
    canva_t *canva = canvazone->extra_information;


    if (canvazone && canva->mode != ERASER) {
        canva_setcolor(canvazone->extra_information, sfWhite);
        canva->last_radius = canva_getsize(canva);
        canva_setsize(canvazone->extra_information, canva->last_radius * 5.);
        canva_setmode(canva, ERASER);
        return 0;
    }
    if (canva->mode == ERASER) {
        canva_setsize(canva, canva->last_radius);
        canva_setmode(canva, PENCIL);
        canva_setcolor(canvazone->extra_information, sfBlack);
    }
    return 0;
}
