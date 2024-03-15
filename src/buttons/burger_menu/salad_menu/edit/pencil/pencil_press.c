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

    if (canvazone)
        canva_setcolor(canvazone->extra_information, sfBlack);
    return 0;
}
