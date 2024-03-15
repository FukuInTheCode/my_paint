/*
** EPITECH PROJECT, 2024
** plus_press.c
** File description:
** plus_press.c
*/

#include "my.h"

int minus_press(zone_t *zone, window_t *window)
{
    zone_t *z = zone_get(window->head, "canva");
    canva_t *canva = z->extra_information;

    if (canva->radius >= 1)
        canva->radius--;
    return 0;
}
