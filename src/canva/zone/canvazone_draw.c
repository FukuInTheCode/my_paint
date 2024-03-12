/*
** EPITECH PROJECT, 2024
** canvazone_destroy.c
** File description:
** canvazone_destroy.c
*/

#include "my.h"

int canvazone_draw(zone_t *canvazone, window_t *window)
{
    return canva_draw(canvazone->extra_information, window->window);
}
