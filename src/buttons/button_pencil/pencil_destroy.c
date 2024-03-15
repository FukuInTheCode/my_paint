/*
** EPITECH PROJECT, 2024
** pencil_destroy.c
** File description:
** pencil_destroy.c
*/

#include "my.h"

int pencil_destroy(pencil_t *pencil)
{
    sfRectangleShape_destroy(pencil->rect);
    sfTexture_destroy((void *)sfSprite_getTexture(pencil->sprite));
    sfSprite_destroy(pencil->sprite);
    free(pencil);
    return 0;
}
