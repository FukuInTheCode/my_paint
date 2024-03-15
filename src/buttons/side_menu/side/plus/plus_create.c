/*
** EPITECH PROJECT, 2024
** plus_create.c
** File description:
** plus_create.c
*/

#include "my.h"

zone_t *plus_create(void)
{
    zone_t *plus = zone_create();

    plus->priority = 2;
    plus->size.x = 50;
    plus->size.y = 50;
    plus->extra_information = side_create();
    plus->depend_corner = LOWER_LEFT;
    plus->depend_on = NULL;
    plus->name = "plus";
    //plus->draw_f = plus_draw;
    //plus->press_f = plus_press;
    return plus;
}
