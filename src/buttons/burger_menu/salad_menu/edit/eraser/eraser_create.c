/*
** EPITECH PROJECT, 2024
** file_create.c
** File description:
** file_create.c
*/

#include "my.h"

zone_t *eraser_create_salad(zone_t *depend)
{
    zone_t *file = zone_create();

    file->priority = 3;
    file->size.x = 100;
    file->size.y = 50;
    file->extra_information = salad_create("eraser");
    file->depend_corner = LOWER_LEFT;
    file->depend_on = depend;
    file->name = my_strdup("eraser");
    file->draw_f = salad_draw;
    file->press_f = eraser_burger_press;
    return file;
}
