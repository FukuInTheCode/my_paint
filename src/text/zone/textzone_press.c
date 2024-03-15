/*
** EPITECH PROJECT, 2024
** textzone_press.c
** File description:
** textzone_press.c
*/

#include "my.h"
int textzone_press(zone_t *zone, window_t *window)
{
    return text_press(zone->extra_information, window);
}
