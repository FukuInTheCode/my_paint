/*
** EPITECH PROJECT, 2024
** about_press.c
** File description:
** about_press.c
*/

#include "my.h"

int save_press(zone_t *zone, window_t *window)
{
    zone_t *canva = zone_get(window->head, "canva");

    if (!canva || !canva->extra_information)
        return 0;
    return canva_save(canva->extra_information);
}
