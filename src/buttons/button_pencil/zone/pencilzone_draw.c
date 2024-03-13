/*
** EPITECH PROJECT, 2024
** pencilzone_draw.c
** File description:
** pencilzone_draw.c
*/

#include "my.h"

int pencilzone_draw(zone_t *pencilzone, window_t *window)
{
    return pencil_draw(pencilzone->extra_information, window);
}
