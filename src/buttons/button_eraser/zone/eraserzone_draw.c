/*
** EPITECH PROJECT, 2024
** eraserzone_draw.c
** File description:
** eraserzone_draw.c
*/

#include "my.h"

int eraserzone_draw(zone_t *eraserzone, window_t *window)
{
    return eraser_draw(eraserzone->extra_information, window);
}
