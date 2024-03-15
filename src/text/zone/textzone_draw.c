/*
** EPITECH PROJECT, 2024
** delimitatorzone_draw.c
** File description:
** delimitatorzone_draw.c
*/

#include "my.h"

int textzone_draw(zone_t *textzone, window_t *window)
{
    return text_draw(textzone->extra_information, window);
}
