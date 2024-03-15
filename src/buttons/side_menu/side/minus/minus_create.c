/*
** EPITECH PROJECT, 2024
** plus_create.c
** File description:
** plus_create.c
*/

#include "my.h"

zone_t *minus_create(zone_t *depend_on)
{
    zone_t *plus = zone_create();

    plus->priority = 2;
    plus->size.x = 50;
    plus->size.y = 50;
    plus->extra_information = caca_create("src/assets/minus.jpeg",
        (sfVector2f){8e-2, 8e-2});
    plus->depend_corner = LOWER_LEFT;
    plus->depend_on = depend_on;
    plus->name = my_strdup("minus");
    plus->draw_f = caca_draw;
    plus->adjust = (sfVector2f){0, 50};
    plus->press_f = minus_press;
    // plus->hover_f = salad_hover;
    return plus;
}
