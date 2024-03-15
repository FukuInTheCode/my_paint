/*
** EPITECH PROJECT, 2024
** plus_create.c
** File description:
** plus_create.c
*/

#include "my.h"

zone_t *plus_create(zone_t *depend_on)
{
    zone_t *plus = zone_create();

    plus->priority = 4;
    plus->extra_information = caca_create("src/assets/plus.jpg",
        (sfVector2f){5e-2, 5e-2});
    plus->size = (sfVector2f){80, 50};
    plus->depend_corner = UPPER_LEFT;
    plus->depend_on = depend_on;
    plus->name = my_strdup("plus");
    plus->draw_f = caca_draw;
    plus->adjust = (sfVector2f){7, 20};
    plus->press_f = plus_press;
    plus->hover_f = caca_hover;
    return plus;
}
