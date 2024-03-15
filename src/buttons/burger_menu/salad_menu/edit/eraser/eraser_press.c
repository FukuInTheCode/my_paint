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

    if (canvazone) {
        canva_setcolor(canvazone->extra_information, sfWhite);
        canva_setsize(canvazone->extra_information,
        canva_getsize(canvazone->extra_information) * 5.);
    }
    return 0;
}
