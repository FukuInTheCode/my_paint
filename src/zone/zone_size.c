/*
** EPITECH PROJECT, 2024
** zone_size.c
** File description:
** zone_size.c
*/

#include "my.h"

int zone_set_size(zone_t *zone, window_t *window, sfVector2f size)
{
    zone->size.x = size.x;
    zone->size.y = size.y;
    return 0;
}
