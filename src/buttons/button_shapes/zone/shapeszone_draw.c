/*
** EPITECH PROJECT, 2024
** shapeszone_draw.c
** File description:
** shapeszone_draw.c
*/

#include "my.h"

int shapeszone_draw(zone_t *shapeszone, window_t *window)
{
    return shapes_draw(shapeszone->extra_information, window);
}
