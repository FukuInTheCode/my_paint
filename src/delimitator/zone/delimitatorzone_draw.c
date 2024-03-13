/*
** EPITECH PROJECT, 2024
** delimitatorzone_draw.c
** File description:
** delimitatorzone_draw.c
*/

#include "my.h"

int delimitatorzone_draw(zone_t *delimitatorzone, window_t *window)
{
    return delimitator_draw(delimitatorzone->extra_information, window);
}
