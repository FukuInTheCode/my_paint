/*
** EPITECH PROJECT, 2024
** pencilzone_press.c
** File description:
** pencilzone_press.c
*/

#include "my.h"

int pencilzone_press(zone_t *z, window_t *w)
{
    zone_t *cz = zone_get(w->head, "canva");
    canva_t *canva = cz->extra_information;

    canva->color = sfBlack;
    if (canva->mode == ERASER)
        canva->radius /= 5;
    canva->mode = PENCIL;
    return 0;
}

