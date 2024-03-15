/*
** EPITECH PROJECT, 2024
** caca_create.c
** File description:
** caca_create.c
*/

#include "my.h"

caca_t *caca_create(char const *path, sfVector2f scale)
{
    caca_t *caca = malloc(sizeof(caca_t));
    sfTexture *t = sfTexture_createFromFile(path, NULL);

    caca->sprite = sfSprite_create();
    sfSprite_setTexture(caca->sprite, t, sfTrue);
    sfSprite_setScale(caca->sprite, scale);
    return caca;
}
