/*
** EPITECH PROJECT, 2024
** delimitator_create.c
** File description:
** delimitator_create.c
*/

#include "my.h"

delimitator_t *delimitator_create(window_t *window)
{
    delimitator_t *delimitator = malloc(sizeof(delimitator_t));
    sfColor grey_color = sfColor_fromRGB(195, 195, 195);
    sfColor grey_color_border = sfColor_fromRGB(159, 159, 159);

    delimitator->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(delimitator->rect, (sfVector2f){1930, 120});
    sfRectangleShape_setFillColor(delimitator->rect, grey_color);
    sfRectangleShape_setOutlineColor(delimitator->rect, grey_color_border);
    sfRectangleShape_setOutlineThickness(delimitator->rect, 3);
    return delimitator;
}