/*
** EPITECH PROJECT, 2024
** eraser_create.c
** File description:
** eraser_create.c
*/

#include "my.h"

color_t *color_create(void)
{
    color_t *color = malloc(sizeof(color_t));
    sfTexture *texture =
        sfTexture_createFromFile("src/assets/color.jpeg", NULL);
    sfVector2f scale = {1, 1};
    sfFloatRect tmp;

    color->is_clicked = false;
    color->rect = sfRectangleShape_create();
    color->sprite = sfSprite_create();
    sfRectangleShape_setFillColor(color->rect, sfWhite);
    sfRectangleShape_setOutlineColor(color->rect, sfBlack);
    sfRectangleShape_setOutlineThickness(color->rect, 2);
    sfSprite_setTexture(color->sprite, texture, sfTrue);
    tmp = sfSprite_getLocalBounds(color->sprite);
    sfRectangleShape_setSize(color->rect, (sfVector2f){tmp.width, tmp.height});
    sfSprite_setScale(color->sprite, scale);
    return color;
}
