/*
** EPITECH PROJECT, 2024
** burger_destroy.c
** File description:
** burger_destroy.c
*/

#include "my.h"

int burger_destroy(burger_t *burger)
{
    // zone_destroy(burger->salad);
    sfRectangleShape_destroy(burger->rect);
    free(burger);
    return 0;
}
