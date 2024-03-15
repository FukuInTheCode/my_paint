/*
** EPITECH PROJECT, 2024
** salad_free.c
** File description:
** salad_free.c
*/

#include "my.h"

int salad_free(zone_t *zone)
{
    salad_t *salad = zone->extra_information;

    sfFont_destroy((void *)sfText_getFont(salad->text));
    sfText_destroy(salad->text);
    sfRectangleShape_destroy(salad->rect);
    free(salad);
    return 0;
}
