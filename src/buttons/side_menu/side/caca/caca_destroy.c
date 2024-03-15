/*
** EPITECH PROJECT, 2024
** caca_free.c
** File description:
** caca_free.c
*/

#include "my.h"

int caca_destroy(caca_t *c)
{
    sfTexture_destroy((void *)sfSprite_getTexture(c->sprite));
    sfSprite_destroy(c->sprite);
    free(c);
    return 0;
}
