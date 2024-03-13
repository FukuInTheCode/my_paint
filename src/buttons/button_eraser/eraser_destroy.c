/*
** EPITECH PROJECT, 2024
** eraser_destroy.c
** File description:
** eraser_destroy.c
*/

#include "my.h"

int eraser_destroy(eraser_t *eraser)
{
    sfRectangleShape_destroy(eraser->rect);
    sfSprite_destroy(eraser->sprite);
    free(eraser);
    return 0;
}
