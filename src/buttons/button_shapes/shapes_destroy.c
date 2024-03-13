/*
** EPITECH PROJECT, 2024
** shapes_destroy.c
** File description:
** shapes_destroy.c
*/

#include "my.h"

int shapes_destroy(shape_t *shape)
{
    sfRectangleShape_destroy(shape->rect);
    free(shape);
    return 0;
}