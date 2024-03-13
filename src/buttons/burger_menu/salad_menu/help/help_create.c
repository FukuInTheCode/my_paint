/*
** EPITECH PROJECT, 2024
** file_create.c
** File description:
** file_create.c
*/

#include "my.h"

zone_t *help_create(zone_t *edit)
{
    zone_t *file = zone_create();

    file->priority = 2;
    file->size.x = 100;
    file->size.y = 50;
    file->extra_information = salad_create("help");
    file->depend_corner = LOWER_LEFT;
    file->depend_on = edit;
    file->name = my_strdup("help");
    file->draw_f = salad_draw;
    file->press_f = help_press;
    return file;
}
