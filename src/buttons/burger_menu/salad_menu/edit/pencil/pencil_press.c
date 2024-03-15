/*
** EPITECH PROJECT, 2024
** pencil_press.c
** File description:
** pencil_press.c
*/

#include "my.h"

int pencil_burger_press(zone_t *zone, window_t *window)
{
    zone_t *canvazone = zone_get(window->head, "canva");
    canva_t *canva = canvazone->extra_information;

    if (canvazone) {
        canva_setmode(canva, PENCIL);
        canva_setsize(canva, canva->last_radius);
        canva_setcolor(canvazone->extra_information, sfBlack);
    }
    return 0;
}
