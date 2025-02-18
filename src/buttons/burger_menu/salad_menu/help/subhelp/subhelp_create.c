/*
** EPITECH PROJECT, 2024
** file_create.c
** File description:
** file_create.c
*/

#include "my.h"

zone_t *subhelp_create(zone_t *depend)
{
    zone_t *file = zone_create();

    file->priority = 3;
    file->size.x = 100;
    file->size.y = 50;
    file->extra_information = salad_create("help");
    file->depend_corner = UPPER_RIGHT;
    file->depend_on = depend;
    file->name = my_strdup("subhelp");
    file->draw_f = salad_draw;
    file->press_f = subhelp_press;
    file->hover_f = salad_hover;
    return file;
}
