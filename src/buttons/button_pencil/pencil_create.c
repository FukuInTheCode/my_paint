/*
** EPITECH PROJECT, 2024
** create_pencil.c
** File description:
** create_pencil.c
*/

#include "my.h"

pencil_t *pencil_create(void)
{
    pencil_t *pencil = malloc(sizeof(pencil_t));

    pencil->is_clicked = false;
    pencil->rect = sfRectangleShape_create();
    pencil->sprite = sfSprite_create();
    sfRectangleShape_setSize(pencil->rect, (sfVector2f){40, 40});
    sfRectangleShape_setFillColor(pencil->rect, sfWhite);
    sfRectangleShape_setOutlineColor(pencil->rect, sfBlack);
    sfRectangleShape_setOutlineThickness(pencil->rect, 2);
    sfTexture *texture = sfTexture_createFromFile("src/assets/pencil.png", NULL);
    sfSprite_setTexture(pencil->sprite, texture, sfTrue);
    sfVector2f scale = {0.1f, 0.1f}; // Scale factors for width and height (0.5f reduces the size by half)
    sfSprite_setScale(pencil->sprite, scale);
    return pencil;
}
