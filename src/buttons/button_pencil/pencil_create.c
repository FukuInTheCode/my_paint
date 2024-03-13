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
    sfTexture *texture =
        sfTexture_createFromFile("src/assets/pencil.png", NULL);
    sfVector2f scale = {0.1f, 0.1f};

    pencil->is_clicked = false;
    pencil->rect = sfRectangleShape_create();
    pencil->sprite = sfSprite_create();
    sfRectangleShape_setSize(pencil->rect, (sfVector2f){40, 40});
    sfRectangleShape_setFillColor(pencil->rect, sfWhite);
    sfRectangleShape_setOutlineColor(pencil->rect, sfBlack);
    sfRectangleShape_setOutlineThickness(pencil->rect, 2);
    sfSprite_setTexture(pencil->sprite, texture, sfTrue);
    sfSprite_setScale(pencil->sprite, scale);
    return pencil;
}
