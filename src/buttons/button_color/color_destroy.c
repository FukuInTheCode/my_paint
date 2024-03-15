/*
** EPITECH PROJECT, 2024
** eraser_destroy.c
** File description:
** eraser_destroy.c
*/

#include "my.h"

int color_destroy(color_t *color)
{
    sfRectangleShape_destroy(color->rect);
    sfTexture_destroy((void *)sfSprite_getTexture(color->sprite));
    sfSprite_destroy(color->sprite);
    free(color);
    return 0;
}
