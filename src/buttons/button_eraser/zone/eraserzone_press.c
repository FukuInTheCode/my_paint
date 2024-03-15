/*
** EPITECH PROJECT, 2024
** pencilzone_press.c
** File description:
** pencilzone_press.c
*/

#include "my.h"

int eraserzone_press(zone_t *z, window_t *w)
{
    zone_t *cz = zone_get(w->head, "canva");
    canva_t *canva = cz->extra_information;

    if (canva->mode != ERASER) {
        canva->last_radius = canva->radius;
        canva->radius *= 5;
        canva->color = sfWhite;
        canva->mode = ERASER;
    } else {
        canva->radius = canva->last_radius;
        canva->color = sfBlack;
        canva->mode = PENCIL;
    }
    return 0;
}
