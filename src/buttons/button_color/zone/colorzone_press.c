/*
** EPITECH PROJECT, 2024
** colorzone_press.c
** File description:
** colorzone_press.c
*/

#include "my.h"

int colorzone_press(zone_t *zone, window_t *window)
{
    return color_press(zone->extra_information, window);
}
