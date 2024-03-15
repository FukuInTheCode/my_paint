/*
** EPITECH PROJECT, 2024
** eraserzone_draw.c
** File description:
** eraserzone_draw.c
*/

#include "my.h"

int colorzone_draw(zone_t *colorzone, window_t *window)
{
    return color_draw(colorzone->extra_information, window);
}
