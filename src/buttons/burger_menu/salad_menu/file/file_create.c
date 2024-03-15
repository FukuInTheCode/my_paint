/*
** EPITECH PROJECT, 2024
** file_create.c
** File description:
** file_create.c
*/

#include "my.h"

zone_t *file_create(zone_t *burgerzone)
{
    zone_t *file = zone_create();

    file->priority = 2;
    file->size.x = 100;
    file->size.y = 50;
    file->extra_information = salad_create("file");
    file->depend_corner = LOWER_LEFT;
    file->depend_on = burgerzone;
    file->name = my_strdup("file");
    file->draw_f = salad_draw;
    file->press_f = file_press;
    file->hover_f = salad_hover;
    return file;
}
