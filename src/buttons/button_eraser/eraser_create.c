/*
** EPITECH PROJECT, 2024
** eraser_create.c
** File description:
** eraser_create.c
*/

#include "my.h"

eraser_t *eraser_create(void)
{
    eraser_t *eraser = malloc(sizeof(eraser_t));
    sfTexture *texture =
        sfTexture_createFromFile("src/assets/eraser.jpg", NULL);
    sfVector2f scale = {0.13f, 0.13f};

    eraser->is_clicked = false;
    eraser->rect = sfRectangleShape_create();
    eraser->sprite = sfSprite_create();
    sfRectangleShape_setSize(eraser->rect, (sfVector2f){40, 40});
    sfRectangleShape_setFillColor(eraser->rect, sfWhite);
    sfRectangleShape_setOutlineColor(eraser->rect, sfBlack);
    sfRectangleShape_setOutlineThickness(eraser->rect, 2);
    sfSprite_setTexture(eraser->sprite, texture, sfTrue);
    sfSprite_setScale(eraser->sprite, scale);
    return eraser;
}
