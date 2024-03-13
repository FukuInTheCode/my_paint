/*
** EPITECH PROJECT, 2024
** shapes_create.c
** File description:
** shapes_create.c
*/

#include "my.h"

shape_t *shapes_create(void)
{
    shape_t *shape = malloc(sizeof(shape_t));

    shape->is_clicked = false;
    shape->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(shape->rect, (sfVector2f){40, 40});
    sfRectangleShape_setFillColor(shape->rect, sfWhite);
    sfRectangleShape_setOutlineColor(shape->rect, sfBlack);
    sfRectangleShape_setOutlineThickness(shape->rect, 2);
    return shape;
}