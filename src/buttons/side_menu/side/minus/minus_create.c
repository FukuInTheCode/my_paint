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

    plus->priority = 5;
    plus->extra_information = caca_create("src/assets/minus.jpeg",
        (sfVector2f){8e-2, 8e-2});
    plus->size = (sfVector2f){80, 50};
    plus->depend_corner = LOWER_LEFT;
    plus->depend_on = depend_on;
    plus->name = my_strdup("minus");
    plus->draw_f = caca_draw;
    plus->adjust = (sfVector2f){7, -60};
    plus->press_f = minus_press;
    plus->hover_f = caca_hover;
    plus->free_f = caca_destroy;
    return plus;
}
